#include <stdio.h>

int main() {
    int myNumber;
    printf("Please enter a number:");
    scanf("%d",&myNumber);
    
    if(myNumber%2 == 0) {
        printf("%d number is even num",myNumber);
    }else {
        printf("%d number is odd num",myNumber);
    }
    return 0;
}