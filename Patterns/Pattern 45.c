4

1 

3 5 

7 9 11 

13 15 17 19 





#include <stdio.h>

int main()
{ 
    int n,k=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
      for(j=1;j<=i;j++)
      { 
        
        printf("%d ",k);
         k+=2;
      }
         
      printf("\n");
     
    }

    return 0;
}
