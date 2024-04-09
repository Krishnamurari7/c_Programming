#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : -");
    scanf("%d", &number);
    // if(number > 0){
    //     printf("this number is Positive");
    // }
    // // if(number <= 0)//if condition use
    // else printf("This number is Not positive"); //if else use

    (number> 0)? printf("this number is Positive") : printf("This number is Not positive"); //ternary operator used
    return 0;
}