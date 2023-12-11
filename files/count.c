// Count chars, words and lines in a file
#include <stdio.h>

void main()
{
  FILE *fp;
  char filename[30];
  int ch, chars = 0, words = 0, lines = 0;

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

        chars++;
        if( ch == ' ') // end of word
             words ++;

        if( ch == '\n') // end of line
        {
            lines++;
            words++;
        }
     }

     printf("Chars = %4d\n", chars);
     printf("Words = %4d\n", words);
     printf("Lines = %4d\n", lines);

     fclose(fp);                   // close file

}

