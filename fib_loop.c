#include <stdio.h>

int main (void)
{
	int n,first=0,second=1,next,c;
	
	printf("how many times to fib: ");
	scanf("%d", &n);
	printf("\nstarting number of terms: %d", n);

	for (c=0; c < n; ++c)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("\n%d: %d", n-c, next);
	}
	printf("\n");
}
