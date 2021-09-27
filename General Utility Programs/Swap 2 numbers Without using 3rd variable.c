INPUT :
11 100
OUTPUT :
100 11


#include <stdio.h>

int main()
{ 
   int c,b,a;
   scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
     
   printf("%d %d",a,b);
   
     return 0;
}
