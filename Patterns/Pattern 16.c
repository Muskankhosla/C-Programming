5

 1  2  3  4  5 

 2  3  4  5  6 

 3  4  5  6  7 

 4  5  6  7  8 

 5  6  7  8  9 



#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%2d ",i+j-1);
            
        }
        printf("\n");
    }


    return 0;
}
