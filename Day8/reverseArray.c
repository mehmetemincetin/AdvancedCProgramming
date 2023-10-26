#include <stdio.h>

int main() {
    int numbers[6];

    for(int i = 0; i <= 6;i++) {
        printf("Enter array numbers %d. :",i);
        scanf("%d",&numbers[i]);
    }
    printf("\nOriginal order:\n");
    for(int i = 0; i <= 6; i++) {
        printf("%d. = %d\n",i,numbers[i]);
    }
    printf("\nReverse order:\n");
    for(int i = 6; i >= 0; i--) {
        printf("%d. = %d\n",i,numbers[i]);
    }
    return 0;
}