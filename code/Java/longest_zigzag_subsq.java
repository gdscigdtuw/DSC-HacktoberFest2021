import java.io.*;
import java.util.*;

class Main {

// Function to return longest zig-zag subsequence length
static int zigzag(int arr[], int n)
{
	int Z[][] = new int[n][2];

	/* Initialize all values from 1 */
	for (int i = 0; i < n; i++)
		Z[i][0] = Z[i][1] = 1;

	int res = 1; // Initialize result

	/* Compute values in bottom up manner */
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] &&
				Z[i][0] < Z[j][1] + 1)
				Z[i][0] = Z[j][1] + 1;

			if( arr[j] > arr[i] &&
			Z[i][1] < Z[j][0] + 1)
				Z[i][1] = Z[j][0] + 1;
		}

		if (res < Math.max(Z[i][0], Z[i][1]))
			res = Math.max(Z[i][0], Z[i][1]);
	}

	return res;
}

/* Driver program */
public static void main(String[] args)
{
  Scanner scn=new Scanner(System.in);
	int n=scn.nextInt();
  int []arr=new int[n];
  for (int i=0;i<n;i++){
    a[i]=scn.nextInt();
  }
	System.out.println("Length of Longest "+"Zig-Zag subsequence is " + zigzag(arr, n));
}
}
