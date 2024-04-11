#include<stdio.h>

int main(){
    int entry[5]= {5,8,7,2,4}; // array declaration and initialization in one line
    int exit[5]= {1,0,2,1,1}; // array declaration and initialization in one line
    int total = 0;
    int sum1 =0;
    int sum ;
    for(int i = 0; i < 5; i++){
        sum = entry[i] - exit[i];
        sum1 =sum;
        if(sum1<sum){
            printf("sum1=%d",sum);
        }else{
            printf("sum = %d",sum1);
        }

        
        // total = total+sum;
        
    }
        // printf("total = %d ", total);
        return 0;
}