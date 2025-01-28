#include <stdio.h>
int main() {
    float a,b;
    char opr;
    scanf("%f %f %c", &a, &b, &opr);
    switch(opr){
        case '+':
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        printf("%.0f",a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}