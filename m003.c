/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)    /* Este ponto-e-virgula não deve estar aqui. */
{
  int i ;

  int y;
  y = 0;

    for  (i = 1; i <= a; i++) /* Aqui acho que voce queria um 'for', talvez */
    {
        if ((a % i) == 0)
       {
         y++ ;
       }
    }

    if (y == 1)
    {
      a = 1;
    }   
  
  else 
  {
    a = 0;
  }

  return 0;
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
