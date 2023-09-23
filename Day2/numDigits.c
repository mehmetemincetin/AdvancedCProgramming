#include <stdio.h>
//Printing the tens and ones digits of an entered number to the screen
int main() {
    int num,first,second;
    printf("Please enter a number:");
    scanf("%d",&num);
    first = num%10;
    second = (num%100) / 10;
    
    printf("The first digit of %d\n",first);
    printf("The second digit of %d\n",second);
    
    return 0;
}