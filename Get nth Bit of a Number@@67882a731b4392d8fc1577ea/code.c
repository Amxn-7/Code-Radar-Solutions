#include <stdio.h>

int main() {
    int num, n, bitValue;

    // Taking input from the user
    scanf("%d", &num);

    scanf("%d", &n);

    // Validating bit position (for a 32-bit integer)
    if (n < 0 || n > 31) {
        return 1;  // Exit with error
    }

    // Retrieving the n-th bit value
    bitValue = (num >> n) & 1;

    // Displaying the result
    printf(" %d", bitValue);

    return 0;
}
