#include <stdio.h>

int maxSubSum( int arr[], int n )
{
	int maxSum = 0, curSum = 0;

	for ( int v = 0; v < n; ++v)
	{
		curSum += arr[v];

		if ( curSum > maxSum )
			maxSum = curSum;
		else if ( curSum < 0 )
			curSum = 0;
	}

	return maxSum;
}

int main (void)
{
	int theArr[] = {1, 2, 3, -4, 6, 5, -9};
	int n = sizeof(theArr)/sizeof(theArr[0]);
	
	printf("Size: %d\n", n);
	printf("Max Subsequence Sum: %d\n", maxSubSum(theArr, n));
}
