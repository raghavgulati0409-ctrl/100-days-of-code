//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, found;
    
    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        found = 0;

        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '*';
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}