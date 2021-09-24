5

2 

2 4 

2 4 6 

2 4 6 8 

2 4 6 8 10 





#include <stdio.h>

void main()
{
   
    int i,j;
    int n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {  
             printf("%d ",j*2);
        
        } 
         printf("\n");
       
    }
}     
