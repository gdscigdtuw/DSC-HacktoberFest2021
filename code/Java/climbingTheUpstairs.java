import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

 class climbingTheUpstairs {

    /*  
        Problem: https://www.hackerrank.com/challenges/climbing-the-leaderboard
     * We want to build a dense ranking array based on the scores as  we read them 
     *  Using that and a few pointer variables we can iterate 1 time over the scores array, advancing  an unknown number of steps
         for each score that Alice has. For each score Alice has we will update our leaderboard index, which is our regular
         ranking and update our rank which is our dense ranking 
     *   Time Complexity: O(n + m) //We only iterate over the scores and alice's scores once
     * Space Complexity: O(n) //We do not store alice's scores in memory, so our space complexity is just n for storing the scores array
     */
    static int[] climbBoard(int[]scores , int[] alice ){
        int n = scores.length;
        int m = alice.length;
        int[] rank = new int[n];
        int ans[] = new int[m];
        rank[0] = 1;
        for(int i = 1 ; i < n ; i++ ){
            if(scores[i] == scores[i-1]){
                rank[i] = rank[i-1] ;
            }else{
                rank[i] = rank[i-1] + 1;
            }
        }
        for(int i = 0 ; i < m ; i++){
            int aliceScore = alice[i];
            if(aliceScore < scores[n-1]){
                ans[i] = rank[n-1] + 1;
            }else if(aliceScore > scores[0]){
                ans[i] = 1;
            }else{
                int idx = binarySearch(scores , aliceScore);
                ans[i] = rank[idx];
            }
        }
        return ans;
    }
    static int binarySearch(int[] scores , int aliceScore){
        int lo = 0 ;
        int hi = scores.length - 1 ;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(scores[mid] == aliceScore){
                return mid;
            }else if(scores[mid]<aliceScore && aliceScore < scores[mid-1]){
                return mid;
            }else if(scores[mid]>aliceScore && aliceScore >= scores[mid+1]){
                return mid + 1;
            }
            else if(scores[mid]<aliceScore){
                hi = mid-1;
            }else if(scores[mid]>aliceScore){
                lo = mid+1;
            }
        }
        return -1;
    }
   
    public static void main(String[] args) throws IOException {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] scores = new int[n];
        for(int i = 0 ; i < n ; i++){
            scores[i] = scn.nextInt();
        }
        int m = scn.nextInt();
        int[] alice = new int[m];
        for(int i = 0 ; i < m ; i++){
            alice[i] = scn.nextInt();
        }
        int[] res = climbBoard(scores,alice);
        for(int i : res){
            System.out.println(i);
        }
    }
}
