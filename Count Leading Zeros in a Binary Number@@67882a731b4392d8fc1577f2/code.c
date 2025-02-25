#include <stdio.h>

// Function to count leading zeros (manual method)
int countLeadingZeros(unsigned int num) {
    if (num == 0)
        return 32; // Special case: all bits are 0

    int count = 0;
    while ((num & (1 << 31)) == 0) { // Check the leftmost bit
        count++;
        num <<= 1; // Shift left by 1
    }

    return count;
}

int main() {
    unsigned int num;

    // Input number
    scanf("%u", &num);

    // Count and print the leading zeros
    int leadingZeros = countLeadingZeros(num);
    printf("%d", leadingZeros);

    return 0;
}
