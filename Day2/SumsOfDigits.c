#include <stdio.h>
//Kullanıcıdan 4 basamaklı bir sayı alıp rakamlarını toplamını veren program 4501
int main() {
    int sayi,bolüm,toplam,kalan;
    printf("Lütfen 4 basamaklı bir sayı giriniz:");
    scanf("%d",&sayi);
    //1.Basamak
    bolüm = sayi/1000; //4
    toplam = toplam + bolüm;
    kalan = sayi % 1000; //501
    //2.Basamak
    bolüm = kalan/100; //5
    toplam += bolüm;
    kalan = sayi %100; //1
    //3.Basamak
    bolüm = kalan /10; //1
    toplam += bolüm;
    kalan = sayi%10 ; //1 
    //4.Basamak
    bolüm = kalan /1; //1
    toplam += bolüm;
    kalan = sayi%1;
    printf("Yazdığınız sayının rakamları toplamı:%d",toplam);
    return 0;
}