// Replace all spaces with dots

#include <stdio.h>

void main()
{
  char st[30];
  int i;

    printf("Enter string :");
    gets(st);

    for(i = 0; st[i] != '\0' ; i ++)
    {
       if(isspace(st[i]))
            st[i] = '.';
    }

    puts(st);
}
