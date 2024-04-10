#include<stdio.h>

int main(){
    int number;
    printf("Enter any number : -");
    scanf("%d", &number);
    int num = number/10;
    printf("last digit remove : %d", num);
    return 0;
}