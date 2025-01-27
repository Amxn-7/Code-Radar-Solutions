#include <stdio.h>
#include <math.h>
int isprime(int a){
    if(a<=1){
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    scanf("%d", &num);
    if(isprime(num)){
        printf("%d", num);
    }
    else{
        printf("%d", num);
    }
    return 0;
}