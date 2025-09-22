#include <stdio.h>
int fibonnaci_series(int n){
    int a = 0, b = 1, c, i;
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonnaci_series(n);
    return 0;
}
