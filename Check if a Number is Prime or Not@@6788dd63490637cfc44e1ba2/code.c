#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    if(a<=1){
        printf("Not Prime");
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if(a%i==0){
            printf("Prime");
        }
    }
    else{
        printf("Not Prime");
    }

    return 0;
}