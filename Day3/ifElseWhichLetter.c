#include <stdio.h>

int main() {
    char myCharacter;
    
    printf("Please enter a letter:");
    scanf("%c",&myCharacter);
    
    if((myCharacter >= 'A') && (myCharacter <= 'Z')) {
        printf("%c is a Uppercase letter",myCharacter);
    }else if ((myCharacter >= 'a') && (myCharacter <= 'z')) {
        printf("%c is a lowercase letter",myCharacter);
    }else {
         printf("%c is a not letter",myCharacter);
    }
    return 0;
}