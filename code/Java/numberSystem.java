import java.util.*;

class numberSystem{

    public static int decimalToBinary(int num){
        int ans=0;
        int pow=1;
        while(num!=0){
            int rem= num%2;
            num=num/2;
            ans= ans+ rem*pow;
            pow=pow*10;
        }
        return ans;
    }

    public static int binaryToDecimal(int num){
        int ans=0;
        int pow=1;
        while(num!=0){
            int rem=num%10;
            num=num/10;

            ans=ans+rem*pow;
            pow=pow*2;
        }
        return ans;
    }

    

    public static void main(String[] args){

        int num=101;

        int binNum= decimalToBinary(num);
        System.out.println(binNum);
    }

}