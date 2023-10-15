#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
    int guessNum,randomNum,rateCount = 100,guessCount;
    
    srand(time(NULL));
    randomNum = (rand() % 100) + 1;
    
    while(guessNum != -1) {
    printf("Guess I kept a number between 1 and 100:");
    scanf("%d",&guessNum);
    if(guessNum == -1) break;
    if(guessNum <1 || guessNum > 100) {
    printf("I said that plese enter between 1 and 100 number\n");
    continue;
    }
    guessCount++;
    
    if(guessNum == randomNum) {
        printf("Congratulations!. You knew %d.th times",guessCount);
        break;
    }else if(guessNum > randomNum) {
        printf("You should enter a smaller num.\n");
        rateCount -= 10;
    }else {
        printf("You should enter a greater num.\n");
        rateCount -= 10;
    }
}
    printf("\nYou score is %d out of 100\n",rateCount < 0 ? 0: rateCount);
    return 0;
}