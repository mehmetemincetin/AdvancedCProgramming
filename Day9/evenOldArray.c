#include <stdio.h>

int main() {
    int n;
    printf("Please enter array size: ");
    scanf("%d",&n);
    int i;
    int A[n];
    for(i = 0; i < n; i++) {
        printf("Please enter your array numbers %d. = ",i+1);
        scanf("%d",&A[i]);
    }
    printf("\nEven number is:");
    for(i = 0; i < n; i++) {
        if(A[i] % 2 == 0) {
        printf("\nArray numbers %d. = %d",i,A[i]);
    }
    }
    printf("\n\nOld number is:");
    for(i = 0; i < n; i++) {
        if(A[i] % 2 != 0) {
        printf("\nArray numbers %d. = %d",i,A[i]);
       }
    }
    return 0;
}