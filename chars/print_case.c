// print case of the letter

#include <stdio.h>

void main()
{
 char ch;

    printf("Enter an Alpha :");
    ch = getche();

    if (ch >= 65 && ch <= 90)
        printf("\nUppercase!");
    else
        printf("\nLowercase");

}
