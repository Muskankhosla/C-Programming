
#include <stdio.h>

int main()
{  int a,b,c;
   void swap(int *,int*);
   scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("%d %d",a,b);
  return 0;
}
void swap(int *n,int *m)
{
    int t;
    t=*n;
    *n=*m;
    *m=t;
    
}
