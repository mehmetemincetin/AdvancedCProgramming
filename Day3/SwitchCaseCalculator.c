#include <stdio.h>

int main() {
    char operator;
    double num1,num2;
    
    printf("Enter first numbers: ");
    scanf("%lf",&num1);
    printf("Enter second numbers: ");
    scanf("%lf",&num2);
    
    printf("Choose an operation (+, -, *, /):");
    scanf(" %c",&operator);
    
    switch(operator) {
        case '+':
        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
        break;
        
        case '-':
        printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
        break;
        
        case '*':
        printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
        break;
        
        case '/':
        printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2);
        break;
        
        default:
        printf("Invalid input.");
        break;
    }
    return 0;
}