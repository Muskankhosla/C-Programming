OUTPUT: I AM CLEVER


#include <stdio.h>

int main()
{ char a[]={'I',' ', 'A','M',' ','C','L','E','V','E','R'};
int i=0;
while(i<sizeof(a)){
    
    printf("%c",a[i]);
    i++;
}

    return 0;
}
