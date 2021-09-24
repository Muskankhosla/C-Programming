5

1 2 3 4 5 6 

2 3 4 5 6 7 

3 4 5 6 7 8 

4 5 6 7 8 9 

Hello World



#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n+i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}
