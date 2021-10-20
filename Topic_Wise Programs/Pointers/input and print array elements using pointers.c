
#include <stdio.h>

int main()
{ 
    int a[100],i,*ptr,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=&a[0];
    for(i=0;i<n;i++)
    {
           printf("%d ",*(ptr+i));
    }

  

    return 0;
}
