#include <stdio.h>

int main()
{  int n,i=1;
  scanf("%d",&n);
  print:
    
      printf("%d",i);
      i++;
  
   if(i<n)
   {
       goto print;
   }

    return 0;
}
