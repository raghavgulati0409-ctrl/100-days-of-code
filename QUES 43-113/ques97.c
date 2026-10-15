//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            if (name[i] != ' ' && name[i] != '\n') {
                printf("%c.", name[i]);
            }
        }
    }

    return 0;
}
