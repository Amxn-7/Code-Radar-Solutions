#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char opr;
    scanf("%d %d %c", &a,&b,&opr);
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
    return 0;
}