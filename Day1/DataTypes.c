#include <stdio.h>
/*
Char 1 byte 
int  4 bytes
float 4 bytes 7 basamak
double 8 bytes 16 basamak
*/
int main() {
    char myLetter = 'C';
    int myNumber = 7;
    float myNumber2 = 2.5;
    double myNumber3 = 2.540796575465754;
    
    printf("%c\n",myLetter);
    printf("%d\n",myNumber);
    printf("%f\n",myNumber2);
    printf("%.15lf",myNumber3);
    
  
}