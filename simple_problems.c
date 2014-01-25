#include "simple_problems.h"

int mainloop = true;


/* DRIVERS */
int do_fib(void)
{
    char choice;

    while (choice != '3')
    {
        printf("Let us Fib\n"
               "1. Loop\n"
               "2. Recursively\n"
               "3. Tell no lies and return\n"
               "\nEnter how you would like to fib: ");

        switch (choice)
            int n, i = 0, c;
            printf("how many times to fib?: ")
            scanf("%d", &n);
        case 1: 
            
        case 2:
            
        case 3: return 0;
}


int do_gcd_euclid(void)
{

    return 0;
}


int do_hash_table(void)
{

    return 0;
}


int do_maxSubSum(void)
{
    int theArr[] = {1, 2, 3, -4, 6, 5, -9};
    int n = sizeof(theArr)/sizeof(theArr[0]);

    printf("Size: %d\n", n);
    printf("Max Subsequence Sum: %d\n", maxSubSum(theArr, n));

    return 0;
}

int do_power(void)
{

    return 0;
}


int do_prob_rel_prime(void)
{
    return 0;
}


int do_square_root_int(void)
{
    return 0;
}

int do_string_reverse(void)
{

}

/* MAIN MENU */
int do_menu(char *pathname)
{
    
    return 0;
}


int do_exit(char *pathname)
{
    mainloop = false;
    return 0;
}


int iscommand(char *input)
{
    int len = strlen(input);
    input[len -1] = '\0';

    char *cmd = strtok(input, " ");
    char *arg = strtok(NULL, "");

    while (strcmp () != 0)
    {
        if (!strcmp(cmd, command[i]))
        {
            return (*function[i](arg));
        }
    }
    printf("\nInvalid command, please try again.\n");
    return -1;
}


int main(int argc, const char *argv[])
{
    char input[128];
    bool loop true;
    
    //if (argc == 1)

    while (mainloop)
    {
        printf("");
        fgets(input, 128, stdin);
        int command = iscommand(input);
    }

    return 0;
}
