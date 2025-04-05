#include <stdio.h>

int main() {
    unsigned int num;

    // Input number
    scanf("%u", &num);

    // Use built-in function
    int trailingZeros = (num == 0) ? 32 : __builtin_ctz(num);

    printf("%d", trailingZeros);

    return 0;
}
