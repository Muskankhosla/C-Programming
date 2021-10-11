
#include <stdio.h>
#include<math.h>
int main()
{ 
    int dec,i=1,oct=0,rem,count=0;;
  scanf("%d",&dec);
 
    while(dec!=0){
        rem=dec%8;
        dec=dec/8;
        oct=oct+rem*i;
        i=i*10;
    }
    printf("%d\n",oct);

    return 0;
}
