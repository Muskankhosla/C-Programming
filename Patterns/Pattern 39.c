5

5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5 





#include <stdio.h>

void main()
{
   
    int i,j;
    int n;
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {  
             printf("%d ",j);
        
        } 
         printf("\n");
       
    }
}     
