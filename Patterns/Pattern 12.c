5
  
1  6 11 16 21 
2  7 12 17 22 
3  8 13 18 23 
4  9 14 19 24 
5 10 15 20 25 



#include <stdio.h>

void main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {  
          k=n*(j-1)+i;
          printf("%2d ",k);
        }
        printf("\n");
        
    }
}
