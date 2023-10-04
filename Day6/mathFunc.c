#include <stdio.h>
#include <math.h>

void powerFunc();
void exponentFunc();
void sqrtFunc();
void logFunc();

int main() {
    sqrtFunc();
    exponentFunc();
    logFunc();
    powerFunc();
    
    return 0;
}
void powerFunc() {
    int a,b;
    printf("\n---Bir sayının üssünü alma fonksiyonu----\n");
    printf("Please enter base number:");
    scanf("%d",&a);
    
    printf("Please enter exponent number:");
    scanf("%d",&b);
    
    printf("%d ^ %d = %.2f\n\n",a,b,pow(a,b));
}
void exponentFunc() {
    printf("---2'nin 1'den 20 kadar olan kuvetleri---\n\n");
    for (int i = 0; i < 21; i++) {
        printf("2 ^ %d = %.2f\n",i,exp2(i));
    }
    printf("\n");
}
void sqrtFunc() {
    printf("\n---0'den 20'ye kadar olan sayıların karekoku---\n\n");
    for(int i = 0; i < 21; i++) {
        printf("%d karekoku = %.2f\n",i,sqrt(i));
    }
    printf("\n");
}
void logFunc() {
    printf("\n---Logaritma alma fonksiyonu---\n\n");
    for(int i = 1; i < 21; i++) {
        printf("Log%d = %.2f\n",i,log10(i));
    }

}

