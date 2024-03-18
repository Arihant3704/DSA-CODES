#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];
    int length;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    // Concatenate strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Compare strings
    int compare = strcmp(str1, str2);
    if (compare == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Copy a string
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // Length of a string
    length = strlen(str1);
    printf("Length of string '%s' is %d.\n", str1, length);

    return 0;
}
