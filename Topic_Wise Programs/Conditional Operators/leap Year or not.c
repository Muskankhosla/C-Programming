#include <stdio.h>

int main()
{
    int a;
      scanf("%d",&a);
    a%4==0 && a%100!=0?printf("yes"):a%400==0? printf("yes"):printf("no");

    return 0;
}
