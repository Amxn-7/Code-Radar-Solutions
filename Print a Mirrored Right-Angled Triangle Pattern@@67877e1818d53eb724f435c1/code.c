#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for (int j=1; j<=n;j++ ){
        for(int i=1;i<=n-j;i++){
            print(" ");
        }
        for(int k=1;k<=i;k++){
            print("*");
        }
    }
    printf("\n");
    return 0;
}