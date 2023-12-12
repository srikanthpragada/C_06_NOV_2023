// Write 50 marks into marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int num, i;


     fp = fopen("marks.dat", "wb");
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open marks.dat");
        exit(1);
     }

     srand(time(0));
     for(i = 1; i <= 50; i ++)
     {
        num = rand() % 100;
        fwrite(&num, sizeof(int), 1, fp);
     }
     fclose(fp);
}
