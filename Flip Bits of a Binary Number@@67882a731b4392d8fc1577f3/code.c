#include <stdio.h>

void printBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;

    // Input a number
    scanf("%u", &num);

    printBinary(num);

    // Perform bitwise NOT
    unsigned int flippedNum = ~num;
    printBinary(flippedNum);

    printf("%u", flippedNum);

    return 0;
}
