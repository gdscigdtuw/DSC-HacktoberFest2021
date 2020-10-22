import java.util.*;

class Main
{
	// Function to find Longest Bitonic Subsequence in an array
	public static int calculateLBS(int[] A)
	{
		int[] I = new int[A.length];
		int[] D = new int[A.length];

		int n = A.length - 1;

		I[0] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				if (A[j] < A[i] && I[j] > I[i])
					I[i] = I[j];
			}
			I[i]++;
		}

		D[n] = 1;
		for (int i = n - 1; i >= 0; i--) {
			for (int j = n; j > i; j--) {
				if (A[j] < A[i] && D[j] > D[i])
					D[i] = D[j];
			}
			D[i]++;
		}

		int lbs = 1;
		for (int i = 0; i <= n; i++) {
			lbs = Integer.max(lbs, I[i] + D[i] - 1);
		}

		return lbs;
	}

	public static void main(String[] args)
	{
		Scanner scn=new Scanner(System.in);
		int n=scn.nextInt();
		int []A=new int[n];
		for(int i=0;i<n;i++)
		{
            A[i]=scn.nextInt();
        }
		System.out.print("Length of Longest Bitonic Subsequence is " +
				calculateLBS(A));
	}
}
