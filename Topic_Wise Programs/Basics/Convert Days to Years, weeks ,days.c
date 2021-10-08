
#include <stdio.h>

int main()
{
   int d,da,w,y;
   scanf("%d",&d);
   y=d/365;
   w=(d%365)/7;
   da=(d%365)%7;
   printf("%d %d %d",y,w,da);
    return 0;
}

