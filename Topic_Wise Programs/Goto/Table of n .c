#include <stdio.h>

int main()
{  int n,i=1,mul=1;
  scanf("%d",&n);
  
  print:
    
        mul=n*i;
        printf("%d *%d = %d\n",n,i,mul);
        i++;
    
  if(i<=10)
  {
      goto print;
  }

    return 0;
}
