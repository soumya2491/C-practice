// write a program to find swap of two numbers using call by refrence and call by value??

#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x; 
    *x = *y;   
    *y = temp; 
}
int main(){
    int a, b, temp;
    printf("Enter two numbers: ");  
    
    scanf("%d %d", &a, &b); 
    printf("Before swapping: a = %d, b = %d\n", a, b);
    

    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping by value %d %d\n", a, b);
    swap(&a, &b); 
    
    printf("After swapping by reference %d %d\n", a, b);
    
    return 0;
}