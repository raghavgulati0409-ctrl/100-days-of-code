//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
    }

    if (lastSpace != -1) {
        printf(" %s", name + lastSpace + 1);
    } else {
        printf("%s", name);
    }

    return 0;
}