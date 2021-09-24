
OUTPUT :


5
input = 5

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5


#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
      printf("input = %d\n",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        printf("%d",i);
        }
    
    printf("\n");
}
    return 0;
}

