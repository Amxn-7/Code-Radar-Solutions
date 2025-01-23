#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a , &b);
    if(b>a){
        printf("Profit");
    }
    else if(a>b){
        printf("Loss");
    }
    else{
        ("No Profit No Loss");
    }
    return 0;
}