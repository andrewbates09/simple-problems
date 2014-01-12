#include <stdio.h>

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (fib(n-1) + fib(n-2));
}

int main (void)
{
	int n, i=0, c;

	printf("how many times to fib?: ");
	scanf("%d", &n);
	
	for (c = 1; c <= n; ++c)
	{
		printf("%d:\t%d\n", n-c+1, fib(i));
		++i;
	}
}
