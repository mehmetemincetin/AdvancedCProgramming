#include <stdio.h>

int main() {
    long long int largest;
    int i = 0;
    long long int numbers[10];
    
    printf("Enter 10 number.\n");
    
    do {
        printf("Number %d: ",i+1);
        scanf("%lld",&numbers[i]);
        i++;
    }while(i < 10);
    
 
    largest = numbers[0];
    i = 1;
    do {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
          i++;
    }
      
        while(i < 10);
        printf("The largest numbers is %lld",largest);
    return 0;
}