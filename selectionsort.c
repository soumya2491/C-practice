#include <stdio.h>

int main(void){
    int temp;
    int arr[] = {2,3,4,5,1,99,33};
    for(int i = 0; i < 6;i++){
      if(arr[i] < arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = arr[i];
      }

    }
}