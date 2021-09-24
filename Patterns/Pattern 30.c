5

A B C D E 

F G H I J 

K L M N O 

P Q R S T 

U V W X Y 






#include <stdio.h>

void main()
{
    char ch='A';
    int i,j;
    int n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {   
             printf("%c ",ch);
            ch++;
        } 
         printf("\n");
       
    }
}     
