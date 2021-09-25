5

1 

1 1 

1 2 1 

1 3 3 1 

1 4 6 4 1 



#include <stdio.h>

int main()
{ 
    int n,i,j,x;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   
      x=1; 
      for(j=1;j<=i;j++)
      {
          printf("%d ",x);
          x=x*(i-j)/j;
        
         
      }
      printf("\n");
     
    }

    return 0;
}
