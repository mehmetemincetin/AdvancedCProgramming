#include <stdio.h>
void sortIt();
void writeTheArray();
void writeTheArrayReverse();
int numbers[6];
int i;

int main() {
     
     for(i = 0; i < 7; i++) {
        printf("Enter array numbers %d. = ",i+1);
        scanf("%d",&numbers[i]);
     }
     printf("\nBefore sorting\n");
     writeTheArray();
     printf("\nThe array is sorting...\n");
     sortIt();
     printf("\nAfter sorting\n");
     writeTheArray();
     writeTheArrayReverse();
     return 0;
}
void sortIt() {
    int j,reserve;
    for(i = 0; i < 7; i++) {
        for(j = i+1; j < 7; j++) {
            if(numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}
void writeTheArray() {
    for(i = 0; i < 7; i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n");
}
void writeTheArrayReverse() {
    printf("\nReverse Array:\n");
    for(i = 6; i >= 0; i--) {
        printf("%d ",numbers[i]);
    }
    printf("\n");

}