// Count chars, words and lines in a file
#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE *fp;
  int ch, chars = 0, words = 0, lines = 0;

     if(argc < 2)  // filename is not provided
     {
         printf("Missing filename. Please provide filename!");
         exit(2);
     }

     fp = fopen(argv[1], "rt");
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open file --> %s", argv[1]);
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

