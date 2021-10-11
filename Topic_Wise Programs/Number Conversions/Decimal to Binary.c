
#include <stdio.h>
#include<math.h>
int main()
{ 
    int bin,i=1,dec=0,rem;
  scanf("%d",&bin);
  while (bin!= 0)  
    {  
        rem = bin% 2;  
        bin= bin / 2; 
        dec=dec+rem*i;
        i=i*10;
        
    }  
    printf("%d",dec);

    return 0;
}
