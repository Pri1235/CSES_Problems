#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define MAX_LENGTH 1000000
// input - line of string of char A,C,G, T
// output - count of longest repeating subtring

int main(){
    char *arr = (char *)malloc(MAX_LENGTH * sizeof(char));
    scanf("%s",arr);

    int count = 1, maxCount = 1;
    int length = strlen(arr);
    for(int i =0;i<length;i++){
        if(arr[i] == arr[i+1]){
            count++;
           if(count >maxCount){
               maxCount = count;
           }
        }else{
            count = 1;
        }
    }

    printf("%d\n",maxCount);
    free(arr);
    return 0;
}