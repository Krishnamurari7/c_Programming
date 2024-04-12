#include<stdio.h>

int main(){
    int number , sum = 0;
    printf("Enter Any Number : -");
    scanf("%d", &number);
    for(int i = 1; i<=number; i++){
        if(i%2==0){
            // printf("%d ",i);
            sum = sum+i;
        }
        
    }
    printf("Total even number of sum :- %d", sum);
    return 0;
}