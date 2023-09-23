#include <stdio.h>
//Girilen 4 basamaklı bir sayının özel olup olmadığını tespit eden program abcd = (ab+cd)'2 ise özel sayıdır.
int main() {
    int num,newNum,ab,cd;
    printf("Please enter a number:");
    scanf("%d",&num);
    
    ab = num/100;
    cd = num%100;
    newNum = (ab+cd)*(ab+cd);
    
    if(num == newNum) {
        printf("%d Sayısı özel sayıdır.",num);
    }else {
        printf("%d Sayısı özel sayı değildir.",num);
    }
    return 0;
}