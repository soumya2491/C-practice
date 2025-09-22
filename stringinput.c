#include <stdio.h>
int main(void){
    char s[20];
    fgets(s,20,stdin);
    printf("%s",s);
}