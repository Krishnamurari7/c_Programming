#include<stdio.h>
int main(){
    int num,a,arm=0;
    printf("enter a number");  //153
    scanf("%d",&num);
    int str = num;  //str = 153
    while(num>0){
        a = num%10;  //a= 153/10 = 3   //a= 15%
        arm = (a*a*a)+arm ;  // arm = (3*3*3)+0 = 27
    }
    if(str == arm){
        printf("this number is Armstrong Number");
    }else{
        printf("This Number is Not Armstrong Number");
    }
    return 0;
    
}