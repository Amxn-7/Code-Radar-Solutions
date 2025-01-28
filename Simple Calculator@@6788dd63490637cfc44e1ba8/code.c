#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    char opr;
    scanf("%f %f %c", &a,&b,&opr);
    if(opr=='+'){
        printf("%.0f",a+b);
    }
    else if(opr=='-'){
        printf("%.0f",a-b);
    }
    else if(opr=='*'){
        printf("%.0f",a*b);
    }
    else if(opr=='/'){
        printf("%.0f",a/b);
    }
    return 0;
}