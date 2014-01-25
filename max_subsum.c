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


