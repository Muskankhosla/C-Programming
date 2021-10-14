#include <stdio.h>

int main()
{
    char text1[50];
    char text2[50];
    int i;
    
    /* Input string from user */
    printf("Enter any string: ");
    gets(text1);
    
    /* Copy text1 to text2 character by character */
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    //Makes sure that the string is NULL terminated
    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}




 OR  USING STRCPY()
     
     
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum size of string

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];

    /* Input original string from user */
    printf("Enter any string: ");
    gets(text1);

    /* Copy text1 to text2 using strcpy() */
    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}
