//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int rowSum[r];

    // Input matrix and calculate row sums
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < r; i++) {
        printf("%d", rowSum[i]);
        if (i < r - 1)
            printf(" ");
    }

    return 0;
}
