#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    char b[100];
    char c[100];
    scanf("%s %s %s", &a , &b , &c);
    printf("Name: %s\n",a);
    printf("Age: %s\n",b);
    printf("Hobby: %s",c);
    
}