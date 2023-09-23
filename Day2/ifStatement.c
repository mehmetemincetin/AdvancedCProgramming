#include <stdio.h>

int main() {
    int myNumber;
    printf("Please entere the number:");
    scanf("%d",&myNumber);
    
    if(myNumber > 0) {
        if(myNumber == 100) {
        printf("It is incredible!");
        
        }else {
            printf("The value is a positive number\n");
            printf("It is not incredible!");
         }
        }else if(myNumber < 0) {
            printf("The value is a negative number\n");
            
    }else {
        printf("Your number is 0!");

    }
    return 0;
}