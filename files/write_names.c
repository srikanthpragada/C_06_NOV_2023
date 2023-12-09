// Write names into names.txt
#include <stdio.h>


void main()
{
  FILE * fp;  // file pointer
  char name[30];


     fp = fopen("names.txt", "wt"); // open in write-text  mode
     while(1)
     {
        printf("Enter name [end to stop] :");
        gets(name);

        if (stricmp(name, "end") == 0)
            break;

        //fputs( strcat(name,"\n"), fp);
        fprintf(fp, "%s\n", name);
     }

     fclose(fp);                   // close file
}

