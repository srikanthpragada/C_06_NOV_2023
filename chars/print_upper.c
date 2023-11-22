// print uppercase letters with ascii codes

#include <stdio.h>

void main()
{
 char ch;

    for(ch = 65; ch <= 90; ch ++)
    {
      printf("%c %d\n", ch, ch);
    }
}
