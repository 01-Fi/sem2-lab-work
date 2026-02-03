#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[50];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // a. Addition (Concatenation)
    strcat(str1, str2);
    printf("\nAfter addition (concatenation): %s", str1);

    // b. Copying
    strcpy(str3, str1);
    printf("\nAfter copying: %s", str3);

    // c. Reverse
    strrev(str3);   
    printf("\nReverse of string: %s", str3);

    // d. Length of string
    printf("\nLength of string: %d", strlen(str1));

    return 0;
}
