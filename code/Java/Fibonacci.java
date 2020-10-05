/*
 * Program to find Nth number in Fibonacci series.
 * By @shivamjaiswal64
 *
 */
class Fibonacci{
  static int fun(int n){
    int a = 0;
		int b = 1;
		if(n==1)
			return a;
		if(n==2)
			return b;
		int temp=0;
		n -=2;
		while(n-- != 0){
			
			temp = a+b; 
			a = b;
			b = temp;
		}
		return b;
	}
	public static void main(String[] args) {
		int n =9;
		System.out.println(fun(n));
	}
}
