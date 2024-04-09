#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : -");
    scanf("%d", &number);
    if(number > 0){
        printf("this number is Positive");
    }
    // printf("This number is Not positive");
    return 0;
}