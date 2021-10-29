#include <stdio.h>

int main()
{ int n;
scanf("%d",&n);
switch(n)
{
case 1:
printf("Male");
break;
case 2:
printf("Female");
break;
default:
printf("Invalid");
break;
}
    return 0;
}
