#include <stdio.h>

int main() {
    int i,myArray[9];
    for(i = 0; i < 10; i++){
        printf("Enter array numbers %d. :",i+1);
        scanf("%d",&myArray[i]);
    }
     printf("\nOriginal orders:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d. :%d\n",i+1,myArray[i]);
    }
    printf("\nReverse orders:\n");
    for(i = 9; i >=0 ;i--){
        printf("Number %d. = %d\n",10-i,myArray[i]);
    }
    return 0;
}