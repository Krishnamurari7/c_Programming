//how to do reverse a string
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string : -");
    scanf("%s", str);
    int n;
    // int count = 0;
    n = strlen(str);
    printf("%d\n",n);
    for(int i = n-1; i >= 0; i--){
        printf("%c", str[i]);
        // count++;

    }
    return 0;
    // char ch ;
    // printf("Enter any String:-");
    // scanf("%c",&ch);
    // char s = strrev(ch);
    // printf("%s",s);
    // return 0;

}