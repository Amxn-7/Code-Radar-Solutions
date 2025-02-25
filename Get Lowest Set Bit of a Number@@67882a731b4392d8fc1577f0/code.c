#include <stdio.h>

// Function to find the position of the lowest set bit (1-based index)
int findLowestSetBit(int num) {
    if (num == 0)
        return 0; // No set bit found if num is 0

    int position = 1; // Start from position 1 (1-based index)
    
    while ((num & 1) == 0) { // Keep shifting right until we find a set bit
        num >>= 1;
        position++;
    }

    return position;
}

int main() {
    int num, position;

    // Input number
    scanf("%d", &num);

    // Find the position of the lowest set bit
    position = findLowestSetBit(num);

    if (position == 0)
        printf("No set bit found (number is 0).\n");
    else
        printf("The lowest set bit is at position: %d\n", position);

    return 0;
}
