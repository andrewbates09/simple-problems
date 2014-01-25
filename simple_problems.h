#ifndef __SIMPLE_PROBLEMS_H__
#define __SIMPLE_PROBLEMS_H__

#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "fibinacci.c"
#include "gcd_euclid.c"
#include "hashtable.c"
#include "max_subsum.c"
#include "power.c"
#include "prob_rel_prime.c"
#include "square_root_int.c"
#include "string_revere.c"



/* ENUMERATIONS */
typedef int bool;
enum { false, true };


/* PROTOTYPES */


/* MAIN */
int do_menu(char *pathname);
int do_exit(char *pathname);
int iscommand(char *input);

char *command[] = {"exit", "fib_loop", "fib_rec", "gcd", "menu", "0"};
int (*function[]) (char*) = {do_exit, do_fib_loop, do_gcd, do_menu};

#endif /* end define __SIMPLE_PROBLEMS_H__ */
