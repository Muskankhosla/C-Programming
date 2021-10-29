

#include <stdio.h>

int main()
{ int n;
float s=0;
int i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=1.0/i;
}
printf("%f",s);
    return 0;
}
