#include <stdio.h>

int main()
{  char n[50];
int c;
  scanf("%s",n);
  c=1;
  print:
    printf("%s\n",n);
    c++;
        
    
  if(c<=10)
  {
      goto print;
  }

    return 0;
}
