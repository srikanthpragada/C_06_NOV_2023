// Read names from names.txt
#include <stdio.h>


void main()
{
  FILE * fp;  // file pointer
  int ch;


     fp = fopen("names.txt", "rt"); // open in read-text  mode
     while(1)
     {
        ch = fgetc(fp);
        if (ch == EOF)  // End of file
            break;

        putch(ch);
     }

     fclose(fp);                   // close file
}

