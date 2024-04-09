#include<stdio.h>

// int main(){ 
//     int a = 10;
//     int b = 20;
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a=%d b=%d", a, b);
//     return 0;
// }




//without  third variable
int main(){
    int a = 10;
    int b = 20;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d b=%d",a , b);
}