import java.io.*;
import java.util.*;

public class Main{
  public static void display(int[] a) {
      for(int i=0;i<a.length;i++)
        System.out.print(a[i]+" ");
    }
    public static void reverse(int[] a,int l,int h) {
        
         int c;
        while (l<h){
            c=a[l];
            a[l] = a[h];
            a[h] = c;
            l++;
            h--;
        
        }

    }

  public static void rotate(int[] a, int k){
    // write your code here
        k=k%a.length;
        if(k<0)
        k=k+a.length;
        
        reverse(a,a.length-k,a.length-1);
        reverse(a,0,a.length-k-1);
        reverse(a,0,a.length-1);
}
       
      

public static void main(String[] args) throws Exception {
      Scanner scn = new Scanner(System.in);

       int n = scn.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scn.nextInt();
        }
 int k = scn.nextInt();
    rotate(a, k);
    display(a);
 }

}
