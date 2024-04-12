#include<stdio.h>

int prime(int number) {
    if(number == 1){
        return 1;
    }
    for(int i = 2 ; i < number ; i++) {
        if(number%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    int start;
    int end;
    printf("Enter a starting number:-");
    scanf("%d",&start);
    printf("enter a ending number:-");
    scanf("%d",&end);
   for(int i = start; i<=end; i++){
       if(prime(i) == 1) {
        printf("%d\n",i);
       }
   }


    // printf("Enter any number : -");
    // scanf("%d", &number);
    // int count = 0;
    // for(int i = 1; i <= number; i++){
    //     if(number%i == 0){
    //         count++;
    //     }
    // }
    // if(count == 2){
    //     printf("This number is prime");
    // }
    // else{
    //     printf("This number is not prime");
    // }
    return 0;
}