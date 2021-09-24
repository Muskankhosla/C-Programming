5

 1  3  5  7  9 
11 13 15 17 19 
21 23 25 27 29 
31 33 35 37 39 
41 43 45 47 49 

#include <stdio.h>

void main()
{
    int n,k,i,j;
    k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%2d ",k);
            k=k+2;
        }
        printf("\n");
        
    }
}

