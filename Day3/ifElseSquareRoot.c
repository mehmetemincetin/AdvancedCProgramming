#include <stdio.h>
#include <math.h>

int main() {
    int num,SquareRoot;
    
    printf("Please enter a number:");
    scanf("%d",&num);
    
    
    
    if(num < 0 ) {
        printf("Please do not this!");
    }else {
        SquareRoot = sqrt(num);
        if(SquareRoot * SquareRoot == num) {
            printf("Square root of %d is an integer.\n",num);
            printf("Square root is %d",SquareRoot);
        }else {
            printf("No,It is not");
        }
    }
    return 0;
}