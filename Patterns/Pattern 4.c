#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
      printf("input = %d\n",n);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
        printf("%d ",i);
        }
    
    printf("\n");
}
    return 0;
}

OUTPUT: 
5
input = 5
5 5 5 5 5 
4 4 4 4 4 
3 3 3 3 3 
2 2 2 2 2 
1 1 1 1 1 



