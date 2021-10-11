
#include <stdio.h>
#include<math.h>
int main()
{ 
    int bin,i=1,dec=0,rem,count=0;;
  scanf("%d",&bin);
  while (bin!= 0)  
    {  
        rem = bin% 2; 
        if(rem==1){
            count++;
        }
        bin= bin / 2; 
        dec=dec+rem*i;
        i=i*10;
        
    }  
    printf("%d\n%d",dec,count);

    return 0;
}
