#include <stdio.h>
void birlikCevir(int);
void onlukCevir(int);

int main() {
    int number = 0,d1,d2,d3,d4;
    while(number != -1) {
        printf("---------Eğer -1 basarsanız program sonlanır-------\n");
        printf("Enter a four digit number:");
        scanf("%d",&number);
        
        d1 = number % 10;//Birler
        d2 = (number % 100) / 10; //Onlar
        d3 = (number % 1000)/100; //Yüzler
        d4 = number /1000; //Binler
        
        if(d4 != 1) {
            birlikCevir(d4);
        printf(" Bin "); 
            
        }
        if(d4 ==1) printf("Bin ");
        
        if(d3 != 1 && d3 != 0) {
        birlikCevir(d3);
        printf(" Yüz ");
        }
        onlukCevir(d2);
        printf(" ");
        birlikCevir(d1);
        printf("\n");
    }
    return 0;
}
void birlikCevir(int number) {
    switch(number) {
        case 1:printf("Bir"); break;
        case 2:printf("İki"); break;
        case 3:printf("Üç"); break;
        case 4:printf("Dört"); break;
        case 5:printf("Beş"); break;
        case 6:printf("Alti"); break;
        case 7:printf("Yedi"); break;
        case 8:printf("Sekiz"); break;
        case 9:printf("Dokuz"); break;
        
    }
}
void onlukCevir(int number) {
     switch(number) {
        case 1:printf("On"); break;
        case 2:printf("Yirmi"); break;
        case 3:printf("Otuz"); break;
        case 4:printf("Kırk"); break;
        case 5:printf("Elli"); break;
        case 6:printf("Altmış"); break;
        case 7:printf("Yetmiş"); break;
        case 8:printf("Seksen"); break;
        case 9:printf("Doksan"); break;
        
    }
}
