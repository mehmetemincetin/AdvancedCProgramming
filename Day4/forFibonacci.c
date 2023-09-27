#include <stdio.h>

int main() {
    int num;
    long long a = 0, b = 1;
    
    printf("Fibonacci dizisi: ");
    scanf("%d",&num);
    
    printf("Fibonacci dizisi: ");
    
    for(int i = 0; i < num; i++) {
        printf("%lld ",a);
        long long next = a +b ;
        a = b;
        b = next;
    }
    return 0;
}