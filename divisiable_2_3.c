#include<stdio.h>

int main(){
    int number;
    printf("Enter any Number:-");
    scanf("%d",&number);

    if(number%2==0 && number%3==0){
        printf("This number is divisiable by 2 and 3");
    }else{
        printf("this number is not divisiable by 2 and 3");
    }

    // if(number%2==0){
    //     printf("This number is divisiable by 2");
    // }else if(number%3==0){
    //     printf("This number is divisiable by 3");
    // }else{
    //     printf("this number is not divisiable by 2 and 3");
    // }
    return 0;
}