#include <stdio.h>

int main() {
    char character;
    
    printf("Please enter a character:");
    character = getchar(); //take a character from user
    
    printf("You entered the character:");
    putchar(character);//Prints the received character on the screen
    
    return 0;
}