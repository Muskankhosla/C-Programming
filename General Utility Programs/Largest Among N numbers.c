
input :
12 13 14 12 34
output :
34




#include <stdio.h>

int main()
{ 
   int n,i,m=0,a[n];
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
   for( i=0;i<n;i++)
   {
       if(a[i]>m)
       {
           m=a[i];
       }
   }
   printf("%d",m);
   
     return 0;
}
