import java.util.*;
class recursion{
    
    public static void printInc(int n){
        if(n==0){
            return;
        }
        printInc(n-1);
        System.out.println(n);
    }


    public static int fact(int n){
        if(n==1){
            return 1;
        }
        int recans = fact(n-1);
        int myans=n*recans;
        return myans;
    }

    
    public static void prindODDEVEN(int n){
        if(n==0){
            return ;
        }
        if(n%2==1){
            System.out.println(n);
        }
        prindODDEVEN(n-1);
        if(n%2==0){
            System.out.println(n);
        }
    }


    public static void toh(int n,String source,String helper,String dest){
        if(n==0){
            return;
        }
        toh(n-1,source,dest,helper);
        System.out.println("move "+n+"th disk from "+source+" to "+dest);
        toh(n-1,helper,source,dest);

    }



    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);

        int n=scn.nextInt();

        // printInc(n);
        toh(n,"source","helper","dest");
            // int factorialOfN=fact(n);
        // System.out.println(factorialOfN);
    }


}