#include <stdio.h>
#include <ctype.h>

int main() {
    char userInput; 
    
    printf("W: Up\n");
    printf("A: Left\n");
    printf("S: Down\n");
    printf("D: Right\n");
    printf("Select a direction: ");
    scanf("%c",&userInput);
    
    userInput = tolower(userInput);
    switch(userInput) {
       
        case 'w':
        printf("Character move up.\n");
        break;
        
        case 'a':
        printf("Character moved left.\n");
        break;
        
        case 's':
        printf("Character moved down.\n");
        break;
        
        case 'd':
        printf("Character moved right.\n");
        break;
        
        default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}