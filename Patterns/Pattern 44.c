5

1 

3 2 

6 5 4 

10 9 8 7 

15 14 13 12 11 






#include <stdio.h>

int main()
{ 
    int n,k=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k+=i;
      for(j=k;j>k-i;j--)
      {
        printf("%d ",j);
       
      }
      
      printf("\n");
    }

    return 0;
}
