#include <stdio.h>
/*
printf fonksiyonun içine %s formatında virgülden sonra metin yazabiliriz.
sizeof fonksiyonu kullanarak değişkenlerinin bellekte kapladığı boyutu öğrenebiliriz.

*/

int main() {
        printf("%s","Merhaba bu bir stringtir ve printf içinde yazılır.\n");

    char myLetter = 'C';
    int myNumber = 56;
    float myNumber2 = 2.5;
    double myNumber3 = 3.3545;
    
    printf("Char boyutu:%d\n",sizeof(char));
    printf("İnteger boyutu:%d\n",sizeof(int));
    printf("Float boyutu:%d\n",sizeof(float));
    printf("Double boyutu:%d\n",sizeof(double));
    
    
    return 0;
}