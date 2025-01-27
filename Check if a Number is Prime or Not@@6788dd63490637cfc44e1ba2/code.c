#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a<=1){
        printf("Not Prime");
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if(a%i==0){
            printf("Prime");
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}