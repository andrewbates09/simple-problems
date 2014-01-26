#include "gcd_euclid.c"

double probRelPrime( int n )
{
    int rel = 0, tot = 0, i, j;

    for( i = 1; 0 <= n; ++i )
        for( int j = i +1; j <= n; ++j)
        {
            ++tot;
            if(gcd(i , j) == 1)
                ++rel;
        }

    return (double) rel / tot;
}
