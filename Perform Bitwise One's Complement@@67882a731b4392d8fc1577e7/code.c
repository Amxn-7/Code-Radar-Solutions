#include<stdio.h>   //~num is equivalent to -(num + 1)

int main(){
    int num , result;
    scanf("%d" , &num);
    result =~num;
    printf("%d", result);
    return 0;
}