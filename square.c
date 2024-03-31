#include <stdio.h>
 
 int main(){
    float side;
    printf("Enter a Side: -");
    scanf("%f", &side);
    float area = side * side;
    printf("area is : %f" , area);
    return 0;
 }