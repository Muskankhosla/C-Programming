5

 2  4  6  8 10 
12 14 16 18 20 
22 24 26 28 30 
32 34 36 38 40 
42 44 46 48 50 

#include <stdio.h>

void main()
{
    int n,k,i,j;
    k=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%2d ",k);
            k=k+2;
        }
        printf("\n");
        
    }
}

