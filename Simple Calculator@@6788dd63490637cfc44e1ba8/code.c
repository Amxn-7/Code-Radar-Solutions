#include <stdio.h>
int main() {
    float a,b;
    char opr;
    scanf("%.0f %.0f %c", &a, &b, &opr);
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