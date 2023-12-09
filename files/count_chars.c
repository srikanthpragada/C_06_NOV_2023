// Count no. of alpha, digits and other chars
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  int ch, alphas = 0, digits = 0, others = 0;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename, "rt"); // open in read-text  mode
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open file --> %s", filename);
        exit(1);
     }

     while(1)
     {
        ch = fgetc(fp);
        if (ch == EOF)  // End of file
            break;

        if(isalpha(ch))
            alphas ++;
        else
            if(isdigit(ch))
               digits ++;
            else
               others++;
     }

     fclose(fp);

     printf("No. of alphabets : %d\n", alphas);
     printf("No. of digits    : %d\n", digits);
     printf("No. of others    : %d\n", others);

}
