5

1 0 1 0 1 

0 1 0 1 0 

1 0 1 0 1 

0 1 0 1 0 

1 0 1 0 1 



#include <stdio.h>

void main()
{
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {    
            x=i+j;
            if(x%2==0)
            { 
             printf("1 ");
             }
             else
             {
                 printf("0 ");
             }
        }
         printf("\n");
       
    }
}     
  
