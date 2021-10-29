#include <stdio.h>

int main()
{  int n,d,s=0,x;
scanf("%d",&n);
x=n;
while(n>0)
{
    d=n%10;
    n/=10;
    s=s*10+d;
}
  if(x==s){
    printf("%d",s);
}
    return 0;
}
