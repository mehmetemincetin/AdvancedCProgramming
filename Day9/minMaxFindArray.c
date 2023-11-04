#include <stdio.h>

int main() {
    int n, i;
    
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Geçersiz dizi boyutu\n");
        return 1;
    }

    int dizi[n]; // Kullanıcıdan alınan boyutta bir dizi oluşturuyoruz.

    
    for (i = 0; i < n; i++) {
        printf("Dizi elemanlarını girin:");
        scanf("%d", &dizi[i]);
    }

    int en_kucuk = dizi[0]; // En küçük elemanı saklamak için bir değişken başlatıyoruz.
    int en_buyuk = dizi[0]; // En büyük elemanı saklamak için bir değişken başlatıyoruz.

    for (i = 1; i < n; i++) {
        if (dizi[i] < en_kucuk) {
            en_kucuk = dizi[i];
        }
        if (dizi[i] > en_buyuk) {
            en_buyuk = dizi[i];
        }
    }

    printf("Dizinin en küçük elemanı: %d\n", en_kucuk);
    printf("Dizinin en büyük elemanı: %d\n", en_buyuk);

    return 0;
}