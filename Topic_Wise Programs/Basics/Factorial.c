
5
120 (5*4*3*2*1)


#include <stdio.h>

int main()
{ 
   int n,i=1,fact=1;;
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      fact*=i;
  }
  printf("%d",fact);

    return 0;
}
