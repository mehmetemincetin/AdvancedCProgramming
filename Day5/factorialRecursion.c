#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Bir pozitif tam sayi girin:");
    scanf("%d",&n);
    
    if(n < 0) {
        printf("Negatif sayilarin faktoriyeli yoktur.\n");
    }else {
        int result = factorial(n);
        printf("Girdiginiz sayinin faktoryeli: %d",result);
        
    }
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }else {
        return n * factorial(n-1);
    }
}
