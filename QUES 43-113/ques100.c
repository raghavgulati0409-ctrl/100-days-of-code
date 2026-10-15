//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];

    if (scanf("%999s", str) != 1) {
        return 1;
    }

    int n = (int)strlen(str);
    int first = 1;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            if (!first) {
                printf(",");
            }

            for (int i = start; i <= end; i++) {
                putchar(str[i]);
            }

            first = 0;
        }
    }

    putchar('\n');
    return 0;
}
