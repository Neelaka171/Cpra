#include<stdio.h>
#include<string.h>


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare the strings
    int result = strcmp(str1, str2);

    // Print the comparison result
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is smaller than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}







return 0;
}
