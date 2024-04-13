#include<stdio.h>
int main(){
    int sum= 0,num,c , r;
    printf("Enter Any Number :-");
    scanf("%d",&num); //num=123
    c = num ;    //123=321
    while(num>0){
        r = num%10;// r = 123%10 = 3
        sum = r+(sum*10); // sum = 0+3 = 3
        num = num/10;// num = 123/10 = 12

        

        // sum = sum*10 + num%10;
        // num = num/10;

    }
    if(c == sum){
        printf("This is a Pallindrom number");
    }else{
        printf("This Number Is not a Pallindrom");
    }
}