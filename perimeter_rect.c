#include<stdio.h>

int main(){
    int length;
    printf("Enter the Length");
    scanf("%d",&length);
    
    int breadth;
    printf("Enter the Breadth");
    scanf("%d",&breadth);

    printf("The area of the Rectangle is: %d", 2 * (length + breadth));

    return 0;
}