#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    printf("Please enter array size: ");
    scanf("%d",&n);
    int A[n];

    if(n <= 0) {
        exit(1);
    }
    
    for(i = 0; i < n; i++) {
        printf("Enter array value %d. = ",i+1);
        scanf("%d",&A[i]);
    }
    int minValue = A[0];
    int maxValue = A[0];

     for(i = 0; i < n; i++) {
        if(minValue > A[i]){
            minValue = A[i];
        }
        if(maxValue < A[i]) {
            maxValue = A[i];
        }
    }
    printf("Min value is %d\n",minValue);
    printf("Max value is %d\n",maxValue);
   return 0;
}