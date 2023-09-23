#include <stdio.h>
/*
Bu kodda scanf fonksiyonunu kullandık
Dairenin çevresini ve alanını veren fonksiyonu yazdık

*/
void calculation() {
    int a,b,c,d,square,cube;
    printf("Please entered first number:");
    scanf("%d",&a);
    printf("Please entered Second number:");
    scanf("%d",&b);
    printf("Please entered thirth number:");
    scanf("%d",&c);
    printf("Please entered fourth number:");
    scanf("%d",&d);
    printf("----The numbers----\t");
    printf("----Square of numbers----\t");
    printf("----Cube of numbers----\n");
    
    printf("%d\t\t\t\t%d\t\t\t\t%d\n",a,a*a,a*a*a);
    printf("%d\t\t\t\t%d\t\t\t\t%d\n",b,b*b,b*b*b);
    printf("%d\t\t\t\t%d\t\t\t\t%d\n",c,c*c,c*c*c);
    printf("%d\t\t\t\t%d\t\t\t\t%d",d,d*d,d*d*d);
    
}

void Circle() {
    float r,perimeter,area;
    const float PI = 3.1415;
    printf("Yari Capi giriniz:");
    scanf("%f",&r);
    perimeter = 2*PI*r;
    area = PI*r*r;
    printf("Perimeter is %f\nArea is %f\n\n",perimeter,area);
}

int main() {
    int myNumber;
    printf("Enter a number:");
    scanf("%d",&myNumber);
    printf("The number you entered is %d\n\n",myNumber);
    Circle();
    calculation();
    return 0;
    
   
}

