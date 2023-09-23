#include <stdio.h>

int main() {
    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma,eskiokuma,toplamHarcananElektrik;
    
    printf("Enflasyon oranını giriniz:");
    scanf("%f",&enflasyon);
    
    printf("Onceki aya ait birim fiyat miktarını girin:");
    scanf("%f",&eskiBirimFiyat);
    
    printf("Onceki aya ait abonelik ücretini girin::");
    scanf("%f",&eskiAboneUcreti);
    
    printf("Bir önceki aya ait okuma değerini girin:");
    scanf("%d",&eskiokuma);
    
    printf("Bu aya ait okuma değerini girin:");
    scanf("%d",&yeniOkuma);
    
    toplamHarcananElektrik = yeniOkuma - eskiokuma;
    yeniBirimFiyat = eskiBirimFiyat*(1+enflasyon/100);
    yeniAboneUcreti = eskiAboneUcreti*(1+enflasyon/100);
    odenecekFatura = toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
    
    printf("\nÖdeyeceğiniz fatura tutarı:%f\n\n",odenecekFatura);
    return 0;
}