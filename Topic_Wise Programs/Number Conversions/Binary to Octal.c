
#include <stdio.h>
#include<math.h>
int main()
{ 
    int bin,i=1,dec=0,rem,count=0;;
  scanf("%d",&bin);
  while (bin!= 0)  
    {  
        rem = bin% 10; 
        bin= bin / 10; 
        dec=dec+rem*i;
        i=i*2;
        
    }  
    i=1;
    while(dec!=0){
        rem=dec%8;
        dec=dec/8;
        oct=oct+rem*i;
        i=i*10;
    }
    printf("%d\n",oct);

    return 0;
}
