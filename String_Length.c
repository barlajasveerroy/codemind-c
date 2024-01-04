#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming the maximum length of the string is 100 characters

    // Input the string
    printf("");
    scanf("%s", str);

    // Calculate the length of the string
    int length = strlen(str);

    // Output the length of the string
    printf("%d
", length);

    return 0;
}