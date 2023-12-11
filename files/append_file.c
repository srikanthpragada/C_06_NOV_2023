// Append source file at the end of target file
#include <stdio.h>

void main()
{
  FILE * sfp, * tfp;
  char sourcefile[30], targetfile[30];
  int ch;

     printf("Enter source filename :");
     gets(sourcefile);

     printf("Enter target filename :");
     gets(targetfile);

     sfp = fopen(sourcefile, "rt"); // open in read-text  mode
     if(sfp == NULL) // open failed
     {
        printf("Sorry! Could not open file --> %s", sourcefile);
        exit(1);
     }

     tfp = fopen(targetfile, "at"); // open in read-text  mode
     if(tfp == NULL) // open failed
     {
        printf("Sorry! Could not open file --> %s", targetfile);
        exit(1);
     }

     while(1)
     {
        ch = fgetc(sfp);
        if (ch == EOF)  // End of file
            break;

        fputc(ch, tfp);
     }

     fclose(sfp);                   // close file
     fclose(tfp);                   // close file
}

