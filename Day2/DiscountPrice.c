#include <stdio.h>

int main() {
    int booksPrice,orderQuantity;
    float discountRate,NoDiscountPrice,discountPrice,sum;
    
    booksPrice = 20;
    orderQuantity = 0;
    
    printf("Kaç adet kitap siparis etmek istiyorsun:");
    scanf("%d",&orderQuantity);
    
    if(orderQuantity >= 60) {
        discountRate = 0.30;
    } else {
        if(orderQuantity >= 30 && orderQuantity < 60) {
            discountRate = 0.20;
        } else if(orderQuantity >=10 && orderQuantity < 30) {
            discountRate = 0.12;
        }else {
            discountRate = 0.01;
        }
    }
    
    NoDiscountPrice = orderQuantity * booksPrice;
    discountPrice = NoDiscountPrice*discountRate;
    sum = NoDiscountPrice - discountPrice;
    
    printf("No Discount Price is: %.2f\n",NoDiscountPrice);
    printf("Discount Price is: %.2f\n",discountPrice);
    printf("Sum Price is: %.2f\n",sum);
    
    return 0;
}