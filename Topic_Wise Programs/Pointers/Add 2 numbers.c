
#include <stdio.h>

int main()
{    int a=5;
int b=10,sum=0;
 int *ptr=&sum;
 sum=a+b;
    printf("%d",*ptr);

    return 0;
}
