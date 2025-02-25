#include<stdio.h>
int clearnthbit(int num, int n){
    return num & ~(1<<n);
}
int main(){
    int num, n ,result;
    scanf("%d" &num);
    scanf("%d", &n);
    result= clearnthbit(num, n);
    printf("%d", result);
    return 0;
    
    return 0;
}