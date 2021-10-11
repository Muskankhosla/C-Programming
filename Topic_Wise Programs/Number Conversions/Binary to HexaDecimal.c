
#include <stdio.h>
#include<math.h>
int main()
{ 
    int bin,i=1,hex=0,rem;
  scanf("%d",&bin);
 
    while(bin!=0){
        rem=bin%10;
        bin=bin/10;
        hex=hex+rem*i;
        i=i*2;
    }
    printf("%d\n",hex);

    return 0;
}
