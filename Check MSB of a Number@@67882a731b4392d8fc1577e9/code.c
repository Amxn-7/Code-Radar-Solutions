#include <stdio.h>

int main() {
    int num;
    int msb;

    // Taking input from the user
    scanf("%d", &num);

    // Finding the MSB (Most Significant Bit)
    msb = (num & (1 << 31)) != 0;  // Shift 1 to the 31st position and AND with num

    // Checking if MSB is set or not
    if (msb)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
