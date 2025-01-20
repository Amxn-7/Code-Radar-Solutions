#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%.4lf", &a);
    printf("You entered: %.4lf", a);
    return 0;
}