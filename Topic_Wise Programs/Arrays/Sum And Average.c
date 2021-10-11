#include <stdio.h>
#include<math.h>
int main()
{ 
    int n,a[100],avg=0,s=0;
  scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
  for(int i=0;i<n;i++)
  {
    s+=a[i];
  }
  avg=s/n;
    printf("%d\n %d",s,avg);

    return 0;
}
