#include <stdio.h>

int fib_loop (int n)
{
    int first=0,second=1,next,c;

    //printf("how many times to fib: ");
    //scanf("%d", &n);
    //printf("\nstarting number of terms: %d", n);

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
        //printf("\n%d: %d", n-c, next);
    }
    return next;
}


int fib_recursive (int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else return (fib(n-1) + fib(n-2));
}
