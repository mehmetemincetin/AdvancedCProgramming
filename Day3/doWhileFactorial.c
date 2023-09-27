#include <stdio.h>

int main() {
    int number, factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if(number < 0) {
        printf("Factorial canno be calculated for negative numbers\n");
    }else {
        do {
            factorial = factorial * number;
            number--;
        }while (number > 0 );
         
        printf("Factorial: %d\n",factorial);
    }
    return 0;
}