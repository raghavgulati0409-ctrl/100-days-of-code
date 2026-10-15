//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, arr[100], element, pos;

    scanf("%d", &n);

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to insert
    scanf("%d", &element);

    // Find appropriate position
    pos = 0;
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    // Print array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
