#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[50],x[50];
  scanf("%s",a);
  strcpy(x,a);
  strrev(x);
  if(strcmp(a,x)==0)
  {
      printf("Yes Palindrome");
  }
  else
    printf("No");

    return 0;
}
