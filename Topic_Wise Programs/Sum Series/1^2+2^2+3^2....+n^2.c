#include <stdio.h>
#include<math.h>
int main()
{ int n,s=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=pow(i,2);
}
printf("%d",s);
    return 0;
}
