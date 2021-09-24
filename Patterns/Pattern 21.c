5

0 1 0 1 0 

0 0 0 0 0 

0 1 0 1 0 

0 0 0 0 0 

0 1 0 1 0 





#include <stdio.h>

void main()
{
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {    
            
            printf("%d ",(i*j)%2);
            
        } 
         printf("\n");
       
    }
}     
