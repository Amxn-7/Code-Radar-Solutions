#include<stdio.h>
int togglenthbit(int num , int n){
    return num ^(1<<n);
}
int main(){
    int num, n , result;
    scanf("%d", &num);
    scanf("%d", &n);
    result=togglenthbit(num ,  n);
    printf("%d", result);    
    return 0;
}