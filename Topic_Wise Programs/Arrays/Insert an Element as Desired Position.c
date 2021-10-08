INPUT :
1 2 3 4 5   {array Elements}
3 9         {positon and element to be inserted}


OUTPUT:
1 2 9 3 4 5 



#include<stdio.h>
void main()
{
    int a[100],i,n=5,pos,num;
    for (i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
     scanf("%d %d", &pos,&num);
    for(i=n-1;i>=pos-1;i--)
    {
         
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
