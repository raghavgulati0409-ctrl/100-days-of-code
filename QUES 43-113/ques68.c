//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, arr[100], position;

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position to delete
    scanf("%d", &position);

    // Shift elements to the left
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
