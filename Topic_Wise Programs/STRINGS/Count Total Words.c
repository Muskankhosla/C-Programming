#include <stdio.h>
int main()
{ 
    char str[50]="hello bhai are u";
int i,count=1;

for(i=0;str[i]!='\0';i++)
{
  if(str[i]==' '||str[i]=='\n')
  {
     count++;
  }
}
    printf("%d\n", count);

    return 0;
}

