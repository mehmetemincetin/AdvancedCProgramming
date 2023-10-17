#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
    int guessNum,randNum,guessCount,guessRate = 100;
    srand(time(NULL));
    randNum = (rand() % 100) + 1;
    printf("Guess I kept a number between 1 and 100.\n");
    
    while(guessNum != -1) {
        printf("Please enter guess number:");
        scanf("%d",&guessNum);
        
        if(guessNum == -1) {
            printf("I said that you should enter between 1 and 100 number.\n");
            continue;
        }
        guessCount++;
        
       if(guessNum > randNum) {
           printf("You should enter a smaller number!\n");
          guessRate -= 10;
       }else if(guessNum < randNum) {
           printf("You should enter a greater number!\n");
           guessRate -= 10;
       }else {
            printf("Congratulations! You knew right answers in %d. step\n",guessCount);
            printf("Your score is:%d\n",guessRate < 0 ? 0 : guessRate);
            break;
       }
        
    }
       return 0;
}
   
    

    