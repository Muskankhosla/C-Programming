5

1 

3 5 

5 7 9 

7 9 11 13 

9 11 13 15 17 




#include <stdio.h>

int main()
{ 
    int n,k,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i-1;
      for(j=1;j<=i;j++)
      {
        printf("%d ",k+i);
        k+=2;
      }
      
      printf("\n");
    }

    return 0;
}
