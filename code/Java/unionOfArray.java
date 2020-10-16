import java.util.*;
class unionOfArray{
    public static void main(String[] args){
    //merge two arrays in acending order
    //we can also take input of two arrays
    //Expected output: 2 4 5 6 8 10
        int[] a1={2,5,6};
        
        int[] a2={4,6,8,10};
        
        int  i = 0; int j = 0;
        
      while(i < a1.length && j < a2.length){
      
        if(a1[i] < a2[j]){
        
            System.out.print(a1[i] + " ");
            i++;
            
        }
        else if(a1[i] > a2[j]){
        
            System.out.print(a2[j] + " ");
            j++;
            }
            else{
                System.out.print(a1[i] + " ");
                i++;
                j++;
            }
      }
      while(i < a1.length){
      
          System.out.print(a1[i] + " ");
          
          i++;
      }
      while(j<a2.length){
      
          System.out.print(a2[j]+" ");
          
          j++;
      }
    }
}
