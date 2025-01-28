#include <stdio.h>
int main() {
    float a,b;
    char opr;
    scanf("%f %f %c", &a, &b, &opr);
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
    else{
        printf("Error");
    }
    return 0;
}