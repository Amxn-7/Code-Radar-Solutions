#include <stdio.h>
int main() {
    int a,b;
    char opr;
    scanf("%d %d %c", &a, &b, &opr);
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