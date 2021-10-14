
#include <stdio.h>

int main()
{
    char a[50],b[50];
    int i,c=0;
    gets (a);
    gets (b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
         c =1;
        }
        else
        c=0;
    }

 if(c==1)
 {
     printf("y");
     
 }
 else
 printf("no");
    return 0;
}


or

include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    /* Reads two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    /* Call strcmp() to compare both strings and stores result in res */
    res = strcmp(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res == -1)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}
