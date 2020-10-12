//**** Code by Muskaan Verma ****//

import java.util.Scanner;
class fibo{
    public static Scanner scn=new Scanner(System.in);

    public static void fibo(int n){
        int a=0, b=1;        
        System.out.println(a);
        System.out.println(b);

        for(int i=1; i<=n-2 ; i++){
            int sum=a+b;
            System.out.println(sum);
            a=b;
            b=sum;
        }
    }

    public static void main(String[] args){
        System.out.print("Enter number of terms needed for the fibonacci series:");
        int n=scn.nextInt();
        fibo(n);
    }
}
