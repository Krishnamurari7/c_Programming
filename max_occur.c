#include<stdio.h>

int main(){
    int array[] = {2,3,4,5,6,4,3,2,3,4,3,4,4,4,2,4,4};
    int len = sizeof(array) / sizeof(array[0]);
    int max_count = 0;
    int max_occur = 0;
    for(int i = 0; i < len; i++){
        int count = 0;
        for(int j = 0; j < len; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            max_occur = array[i];
        }
    }
    printf("max_count = %d max_occur = %d",max_count, max_occur);
    return 0;
}