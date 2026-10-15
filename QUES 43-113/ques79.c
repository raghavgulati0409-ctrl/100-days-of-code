//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonals starting from the top row
    for (int startCol = 0; startCol < c; startCol++) {
        int i = 0, j = startCol;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Diagonals starting from the last column
    for (int startRow = 1; startRow < r; startRow++) {
        int i = startRow, j = c - 1;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}