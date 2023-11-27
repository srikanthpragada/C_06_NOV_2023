// Count uppercase letters in a string

#include <stdio.h>

void main()
{
  char st[30];
  int i, count = 0;

    printf("Enter string :");
    gets(st);

    for(i = 0; st[i] != '\0' ; i ++)
    {
       if(isupper(st[i]))
          count ++;
    }

    printf("Upper count = %d", count);
}
