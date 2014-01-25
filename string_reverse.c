#include <stdio.h>

int reverse_string_tmp(char *istring)
{
    int a, b=0;

    while (istring[b] != '\0')
    {
        ++b;
    }

    char tmp;
    for (a=0; a < b-1; a++)
    {
        tmp = istring[a];
        istring[a] = istring[b-1];
        istring[b-1] = istring[tmp];
        b--;
    }

   return 0;
}


int reverse_string_swp(char *istring)
{
    int a, b=0;

    while (istring[b] != '\0')
    {
        ++b;
    }

    for (a=0; a < b-1; a++)
    {
        istring[a+b] = istring[a];
        istring[a] = istring[b-1];
        istring[b-1] = istring[a+b];
        b--;
    }
    istring[a+b] = '\0';

    return 0;
}


int reverse_string_bit(char *istring)
{
    int a, b=0;

    while (istring[b] != '\0')
    {
        ++b;
    }
    
    for (a=0; a < b; a++)
    {
        istring[a] &= istring[b-1];
        istring[b-1] ^= istring[a];
        istring[a] ^= istring[b-1];
        b--;
    }

    return 0;
}
