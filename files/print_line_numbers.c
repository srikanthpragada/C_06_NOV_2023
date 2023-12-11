// Read lines and print them with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30];
  char line[100];
  char *p;
  int lineno = 1;

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
        p=fgets(line, 100, fp); // read a line
        if(p == NULL)  // EOF
            break;

        printf("%3d: %s",lineno, line);
        lineno ++;
     }
     fclose(fp);
}
