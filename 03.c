// write a program to make calculator through function

#include <stdio.h>

int main(){
    int a, b, result;
    char operator;  
    printf("Enter two number: ");
    scanf("%d %d", &a ,&b);
    printf("Enter operator: ");
    scanf(" %c", &operator);    
    if (operator == '+') {
        result = a + b;
    } else if (operator == '-') {
        result = a - b;
    } else if (operator == '*') {
        result = a * b;
    } else if (operator == '/') {
        if (b != 0) {
            result = a / b;
        } else {
            printf("Error: Division by zero.\n");
            return 1;
        }
    } else {
        printf("Error: Invalid operator.\n");
        return 1;
    }
    printf("Result: %d\n", result);

    
    return 0;
}