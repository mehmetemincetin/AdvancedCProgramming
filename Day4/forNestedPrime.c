#include <stdio.h>

int main() {
    int i,j,num;
    printf("Bir sayi girin: ");
    scanf("%d", &num);
    
    printf("Prime Numbers: ");
    for (i = 2; i <= num; i++) {
        int isPrime = 1;
        for (j= 2; j <= i/2; j++) {
            if (i%j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ",i);
        }
    }
    return 0;
}