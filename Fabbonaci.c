#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : -"); // number = 5
    scanf("%d", &number);
    int a = 0;  
    int b = 1;
    int c = 0;
    for(int i = 1; i <= number; i++){
        printf("%d ", c);  //0  //1 //1 //2
        a = b;  //a=1  //0 //1
        b = c;  //b=0  //1  //1
        c = a+b;  //c = 1+0=1  //1+0=1 //1+1=2
    }
    return 0;
}