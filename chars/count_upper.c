//count uppercase letters

#include <stdio.h>

void main()
{
 char ch;
 int i, count = 0;

    printf("Enter chars:");
    for(i = 1; i <= 10; i ++)
    {
       ch = getche();
       if (isupper(ch))
            count ++;
    }

    printf("\nCount = %d", count);
}
