#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && a==c && c==b){
        printf("Equilateral");
    }
    else if((a==b && b!=c)||(a==c && c!=b)||(a!=b && b==c)){
        printf("Isosceles");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    return 0;
}