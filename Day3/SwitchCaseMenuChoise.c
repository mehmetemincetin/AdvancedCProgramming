#include <stdio.h>

int main() {
    int menuChoice;
    
    printf("Menu:\n");
    printf("1. Create a new file\n");
    printf("2. Open a file\n");
    printf("3. Save a file\n");
    printf("Choose an option:");
    scanf("%d",&menuChoice);
    
    switch(menuChoice) {
        case 1:
        printf("New file created\n");
        break;
        
        case 2:
        printf("File opened.\n");
        break;
        
        case 3:
        printf("File saved.\n");
        break;
        
        default:
        printf("Invalid input.");
        break;
    }
    return 0;
}