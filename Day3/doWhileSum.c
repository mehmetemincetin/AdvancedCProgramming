#include <stdio.h>

int main() {
    int number, sum = 0;
    
    do {
        printf("Enter a number (Enter 0 to exit):");
        scanf("%d",&number);
        sum += number;
    }while (number != 0);
    
    printf("Sum: %d\n",sum);
    return 0;
}