//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, arr[100], position, element;

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and element
    scanf("%d %d", &position, &element);

    // Shift elements to the right
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position] = element;
    n++;

    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
