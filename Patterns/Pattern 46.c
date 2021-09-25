4

2 

4 6 

8 10 12 

14 16 18 20 




#include <stdio.h>

int main()
{ 
    int n,k=2,i,j;
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
