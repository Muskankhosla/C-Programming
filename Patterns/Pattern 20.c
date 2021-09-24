5

 1  0  1  0  1 

 0  0  0  0  0 

 1  0  1  0  1 

 0  0  0  0  0 

 1  0  1  0  1 





#include <stdio.h>

void main()
{
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {    
            x=(i*j)%2;
           
                
             printf("%2d ",x);
             }
           
         printf("\n");
       
    }
}     
