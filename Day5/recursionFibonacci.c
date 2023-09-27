#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    
    if (n < 0) {
        printf("Fibonacci series is not defined for negative number.\n");
    }else {
        printf("Fibonacci(%d) = %d\n",n,fibonacci(n));
        
    }
    
    return 0;
}
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }else {
        return fibonacci(n-1) + fibonacci(n-2) ;
        
    }
}