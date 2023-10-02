#include <stdio.h>
double celToFah(int);
double fahToCel(int);

int main() {
    int choice;
    double temperature, convertedTemperature;
    
    
    printf("1. Celsisus'dan Fahrenheit'e\n");
    printf("2. Fahrenheit'dan Celsius'a\n");
    printf("Lütfen dönüşüm türünü seçin:");
    scanf("%d",&choice);
    
    if(choice == 1) {
        printf("Santigrat dereceyi girin:");
        scanf("%lf",&temperature);
        printf("%.2lf Celcius, %.2lf Fahrenheit'e eşittir.",temperature,celToFah(temperature));
    }
    if (choice == 2) {
        printf("Santigrat dereceyi girin:");
        scanf("%lf",&temperature);
        printf("%.2lf Fahrenheit, %.2lf Celsisus'a eşittir.",temperature,fahToCel(temperature));
    }
    
}
double celToFah(int a) {
    return (a*9/5) + 32;
}
double fahToCel(int a) {
    return ((a-32) * 5/9); 
}