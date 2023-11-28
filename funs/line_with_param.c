
#include <stdio.h>

// user-defined function
void line(char ch)
{
 int i;

     for(i = 1; i <= 25; i ++)
        putch(ch);
}


void main()
{
     line('*');  // call function
     printf("\nSrikanth Technologies\n");
     line('=');
}
