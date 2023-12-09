// Write uppercase letters to upper.txt
#include <stdio.h>


void main()
{
  FILE * fp;  // file pointer
  int ch;


     fp = fopen("alpha.txt", "wt"); // open in write-text  mode

     for(ch = 65; ch <= 90; ch ++)
         fputc(ch, fp);            // write char

     for(ch = 97; ch <= 122; ch ++)
         fputc(ch, fp);

     fclose(fp);                   // close file
}

