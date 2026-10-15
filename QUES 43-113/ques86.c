 //Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, palindrome = 1;

    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
