INPUT : 1 2 3 4 5 
        3
OUTPUT: 1 2 3 5 {element at pos 3 deleted}



#include<stdio.h>
void main()
{
    int a[100],i,n=5,pos;
    for (i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
     scanf("%d", &pos);
    for(i=pos;i<n;i++)
    {
         
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
