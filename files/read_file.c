// Read contents of a given file
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  int ch;

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

        putch(ch);
     }

     fclose(fp);                   // close file
}

