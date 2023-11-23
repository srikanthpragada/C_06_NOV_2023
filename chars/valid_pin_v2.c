// Validate PIN

#include <stdio.h>

void main()
{
 int i, count = 0;
 char ch;

    printf("Enter PIN : ");
    for(i = 1; i <= 4; i ++)
    {
        ch = getch();
        putch('*');
        if(isdigit(ch))
            count ++;
    }

    if (count == 4)
        printf("\nValid PIN");
    else
        printf("\nInvalid PIN");
}
