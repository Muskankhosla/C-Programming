
#include <stdio.h>

int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
