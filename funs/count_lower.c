#include <stdio.h>

int count_lower(char s[30])
{
 int i, count = 0;

    for(i = 0; s[i] != '\0'; i ++)
    {
        if(islower(s[i]))
            count ++;
    }

    return count;
}


void main()
{
 int count;

    count = count_lower("Abc");
    printf("Lower count = %d", count);

}
