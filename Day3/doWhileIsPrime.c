#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; //Assume the number is prime initially
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("Prime numbers are greater than 1.\n");
        return 1;
    }
    if (num == 2) {
         printf("%d is a prime number.\n", num);
         return 0;
    }
    
    do{
        if (num % i == 0) {
            isPrime = 0; //If it's divisible by any number other than 1 and itself, it's not Prime
            break;
        }
        i++;
    }while (i <= num /2);
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    }else {
        printf("%d is not a prime number.\n",num);
    }
return 0;
}