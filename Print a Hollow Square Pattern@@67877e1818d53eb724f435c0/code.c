#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i;i<a; i++){
        for(int j;j<a; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}