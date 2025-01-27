#include <stdio.h>
#include <math.h>
int isprime(int a){
    if(a<=1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    for (int i = 2; i <= (a*a); i++) {
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
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}