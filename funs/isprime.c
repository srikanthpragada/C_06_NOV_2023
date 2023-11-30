#include <stdio.h>

// Returns 1 for prime and 0 for non-prime
int isprime(int num)
{
 int i;

    for(i = 2; i <= num/2; i ++)
    {
        if (num % i == 0)
            return 0; // non-prime
    }

    return 1; // prime
}


void main()
{
   if (isprime(13))
      printf("Prime");
   else
      printf("Not prime");
}
