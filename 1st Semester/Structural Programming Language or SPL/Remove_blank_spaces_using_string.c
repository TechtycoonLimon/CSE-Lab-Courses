#include <stdio.h>

int main() {
    char str[100], new_str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove spaces
    i = j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            new_str[j] = str[i];
            j++;
        }
        i++;
    }
    new_str[j] = '\0'; // Add null terminator at the end

    printf("String without spaces: %s\n", new_str);

    return 0;
}
