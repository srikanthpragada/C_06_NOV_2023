// Read products from products.dat

#include <stdio.h>

struct product {
   char name[30];
   int price;
};

void main()
{
  FILE * fp;
  struct product p;
  int count;

     fp = fopen("products.dat", "rb");
     if(fp == NULL) // open failed
     {
        printf("Sorry! Could not open products.dat");
        exit(1);
     }

     while(1)
     {
        count = fread(&p, sizeof(struct product), 1, fp);
        if(count == 0) // EOF
            break;
        printf("%-30s %6d\n", p.name, p.price);
     }

     fclose(fp);
}
