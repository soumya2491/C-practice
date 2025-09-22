#include <stdio.h>

void draw(int height);

int main (void){
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d",&n);
    draw(n);
}
void draw(int height){
    if(height<=0) return ;
    draw(height-1);
    for(int i = 0; i < height;i++){
        printf("#");
    }
    printf("\n");
}