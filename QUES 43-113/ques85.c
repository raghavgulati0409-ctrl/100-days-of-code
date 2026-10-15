//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print string in reverse
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}