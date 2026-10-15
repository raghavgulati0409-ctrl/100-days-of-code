//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, max = 0, result = 0;

    scanf("%lld", &n);

    if (n == 0) {
        freq[0] = 1;
    }

    while (n != 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
