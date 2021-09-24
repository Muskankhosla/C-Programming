5

0 0 0 0 0 

1 1 1 1 1 

0 0 0 0 0 

1 1 1 1 1 

0 0 0 0 0 





#include <stdio.h>

void main()
{
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {   
            if(i%2==0)
            {
             printf("1 ");
            }
            else
            printf("0 ");
        } 
         printf("\n");
       
    }
}     
