//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            
            if (str[i] != '\n') {
                printf("%c", str[i]);
            }
        }
    }

    return 0;
}