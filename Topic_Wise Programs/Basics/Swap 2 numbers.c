INPUT:
11 34
OUTPUT:
34 11



#include <stdio.h>

int main()
{ 
   int c,b,a=0;
   scanf("%d %d",&c,&b);
    a=b;
    b=c;
    c=a;
     
   printf("%d %d",c,b);
   
     return 0;
}
