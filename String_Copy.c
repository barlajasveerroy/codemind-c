#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000 // Maximum length of the input string

int main() {
    char input[MAX_LENGTH];

    // Reading input string
    fgets(input, sizeof(input), stdin);

    // Removing the newline character if present
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }

    // Printing the input string
    printf("%s
", input);

    return 0;
}