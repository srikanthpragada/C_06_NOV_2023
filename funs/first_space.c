#include <stdio.h>
#include <string.h>



// Returns position of space or -1 if not found
int first_space(char s[30])
{
int i;

   for(i = 0; s[i] != '\0'; i ++)
   {
      if(s[i] == 32)
         return i;
   }

   return -1; // no space found
}


void main()
{
   printf("%d\n", first_space("C Programming Lang"));
   printf("%d", first_space("Programming"));
}


