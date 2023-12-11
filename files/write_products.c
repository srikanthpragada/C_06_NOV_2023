// Write products into products.dat

#include <stdio.h>

struct product {
   char name[30];
   int price;
};

void main()
{
  FILE * fp;
  int i;
  struct product products[] = {
          {"iPhone 15 Pro", 120000},
          {"Samsung Fold",150000},
          {"Bose Speakers",50000}
         };

     fp = fopen("products.dat", "wb"); // open in read-text  mode
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open products.dat");
        exit(1);
     }

     for(i = 0; i < 3; i ++)
     {
        fwrite( &products[i],  sizeof(struct product), 1, fp);
     }
     fclose(fp);
}
