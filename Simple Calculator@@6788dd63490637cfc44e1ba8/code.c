#include <stdio.h>
int main() {
    float a,b;
    char opr;
    scanf("%f %f %c", &a,&b,&opr);
    if(opr=='+'){
        printf("%d",a+b);
    }
    else if(opr=='-'){
        printf("%d",a-b);
    }
    else if(opr=='*'){
        printf("%d",a*b);
    }
    else if(opr=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}