// Validate password

#include <stdio.h>

void main()
{
 int i, upper = 0, digit = 0;
 char ch;

    printf("Enter Password : ");
    for(i = 1; i <= 8; i ++)
    {
        ch = getch();
        putch('*');
        if(isdigit(ch))
           digit = 1;
        else
            if(isupper(ch))
              upper = 1;
    }

    if (upper && digit)
        printf("\nValid Password");
    else
        printf("\nInvalid Password");
}
