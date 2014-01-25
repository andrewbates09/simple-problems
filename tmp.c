#include <stdio.h>

int main (void)
{
    int ai[10] = 0;

    ai[1] = 1;
    ai[2] = 4;
    
    int j;
    for (j = 0; j < 9; ++j)
        printf("%d\n", ai[j]);
}
