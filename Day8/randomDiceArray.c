#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int i,dice,howMany[7] = {0,0,0,0,0,0,0};
    srand(time(NULL));
    for(i = 1; i <= 100; i++){
        dice = rand() % 6 + 1;
        howMany[dice]++;
    }
    printf("\nZar numaralari\t Kaç defa geldi.\n");
    for(i = 1; i <= 6; i++){
        printf("\t%d\t\t%d\n",i,howMany[i]);
    }
    return 0;
}