#include <stdio.h>
#include <string.h>

struct time
{
  int h, m, s;
};

void print(struct time t)
{
   printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

int compare(struct time t1, struct time t2)
{
    return totalseconds(t1) - totalseconds(t2);
}

struct time max(struct time t1, struct time t2)
{
   if (compare(t1, t2) > 0)
       return t1;
   else
       return t2;
}

struct time randomtime()
{
   struct time t;

       t.h = rand() % 24;
       t.m = rand() % 60;
       t.s = rand() % 60;

       return t;
}

// Pass by reference
void inittime(struct time * p)
{
       p->h = rand() % 24;
       p->m = rand() % 60;
       p->s = rand() % 60;
}

void main()
{
  struct time times[5];
  struct time largest = {0,0,0};
  int i;

     srand(time(0));
     for(i = 0; i < 5; i ++)
     {
         //times[i] = randomtime();
         inittime(&times[i]);  // pass address

         if(compare(times[i], largest) > 0)
                largest = times[i];

         print(times[i]);
     }

     print(largest);
}

