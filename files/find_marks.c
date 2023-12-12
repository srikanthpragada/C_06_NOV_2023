// Take rollno and display marks

#include <stdio.h>

void main()
{
  FILE * fp;
  int num, pos, rollno, count;


     fp = fopen("marks.dat", "rb");
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open marks.dat");
        exit(1);
     }


     while(1)
     {
        printf("Enter rollno [0 to stop] : ");
        scanf("%d", &rollno);

        if (rollno == 0)
             break;

        pos = (rollno - 1) * sizeof(int);
        fseek(fp, pos, SEEK_SET);  // move file pointer to the given location

        count = fread(&num, sizeof(int), 1, fp);
        if (count == 0) // cannot read
             printf("Rollno not found!\n");
        else
             printf("Marks : %d\n",num);
     }

     fclose(fp);
}
