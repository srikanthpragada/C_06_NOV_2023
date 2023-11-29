#include <stdio.h>

int find_pos(char s[30], char ch)
{
 int i;

    for(i = 0; s[i] != '\0'; i ++)
    {
        if(s[i] == ch)
          return i;  // returns pos where char is found
    }

    return -1; // not found
}


void main()
{

    printf("Found at = %d", find_pos("Hello", 'a'));

}
