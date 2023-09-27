#include <stdio.h>

int main() {
    int selectedCity;
    
    printf("Select a city to get weather information:\n");
    printf("1. Istanbul\n");
    printf("2. Ankara\n");
    printf("3. Izmir\n");
    scanf("%d",&selectedCity);
    
    switch(selectedCity) {
        case 1:
        printf("Weather in Istanbul: Partially sunny.\n");
        break;
        
        case 2:
        printf("Weather in Ankara: Light snow.\n");
        break;
        
        case 3:
        printf("Invalid city selection.\n");
        break;
        
        default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}