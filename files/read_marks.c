// Read 50 marks from marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int num, count;


     fp = fopen("marks.dat", "rb");
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open marks.dat");
        exit(1);
     }


     while(1)
     {
        count = fread(&num, sizeof(int), 1, fp);
        if (count == 0)
             break;
        printf("%d ", num);
     }
     fclose(fp);
}
