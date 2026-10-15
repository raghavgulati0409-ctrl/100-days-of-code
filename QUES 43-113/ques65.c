//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, arr[100], search;
    int low, high, mid, index = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            index = mid;
            break;
        } else if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}
