#include<stdio.h>

int main(){
    int number,sum=2,k=2;
    printf("Enter any number : -");
    scanf("%d", &number);
    for(int i = 2; i <= number; i++){
        if(i%2==0){
            sum = sum + k;
        }else{
            sum = sum + k;
            ++k;
        }
    }
    printf("%d",sum);
    return 0;
}