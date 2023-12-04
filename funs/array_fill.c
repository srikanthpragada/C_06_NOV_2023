#include <stdio.h>
#include <string.h>

void fill(int a[], int len) // int * a
{
  int i;

      srand(time(0));
      for(i = 0; i < len; i ++)
         a[i] = rand() % 100;

}
void print(int a[], int len)
{
  int i;

      for(i = 0; i < len; i ++)
         printf("%5d", a[i]);

}

void main()
{
 int a[5], b[10];



    //fill(a, 5);
    //print(a, 5);

    fill(b, 10);
    print(b, 10);

}


