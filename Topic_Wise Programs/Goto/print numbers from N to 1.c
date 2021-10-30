#include <stdio.h>

int main()
{  int n,i;
  scanf("%d",&n);
  i=n;
  print:
    
      printf("%d ",i);
      i--;
  
   if(i>=1)
   {
       goto print;
   }

    return 0;
}
