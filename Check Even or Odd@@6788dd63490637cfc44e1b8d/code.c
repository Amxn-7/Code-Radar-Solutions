#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(a%2==0){
        printf("Even");
    }
    else if(!(a%2==0)){
        printf("Odd");
    }
    return 0;
}