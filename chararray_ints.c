#include <stdio.h>

int main (void)
{
    int ival = 1234;
    int *iptr = &ival;

    printf("ival: %d\n", ival);
    printf("&ival: %d\n", (int)&ival);
    printf("*iptr: %d\n", *iptr);

    char **charptrptr = (char**) iptr;  // addr of mem location containing ival
    char *charptr = *charptrptr;        // char val

    char ichar[10];
    //ichar = ival;

    //printf("charptr: %s\n", charptr);
    
    charptr += 100;
 
    //printf("ival: %d\n", ival);
    //printf("charptr: %s\n", charptr);
}
