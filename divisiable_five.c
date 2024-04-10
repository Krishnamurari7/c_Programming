#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number:-");
    scanf("%d",&num);
    if(num%5==0){
        printf("This number is divisiable by 5");
    }else{
        printf("this number is not divisiable by 5");
    }
    return 0;
}