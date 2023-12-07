#include <stdio.h>

enum paymentmode {
    CASH = 1, UPI, CARD
};

struct payment  {
   int invno;
   int amount;
   enum paymentmode paymode;
};


void main()
{
  enum paymentmode paymode;
  struct payment p = {1, 2000, CARD};


     paymode = UPI;
     printf("%d ", paymode);

     if(paymode == UPI)
         printf("UPI");



}

