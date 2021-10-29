
#include <stdio.h>
#include<math.h>
int fact(int n)
{ int i;
    int fc;
    for(i=1;i<=n;i++)
    {
        fc*=i;
    }
    return fc;
}
int main()
{ int n,s=0,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{ for(j=1;j<=i;j++)
    s+=fact(i);
}
printf("%d",s);
    return 0;
}
