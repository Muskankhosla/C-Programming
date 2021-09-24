5

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 


#include <stdio.h>

void main()
{
   
    int i,j;
    int n;
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {  
             printf("%d ",j);
        
        } 
         printf("\n");
       
    }
}     
