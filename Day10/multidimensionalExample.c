#include <stdio.h>

int main() {
    int matrix[3][4];
    int i,j;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            matrix[i][j] = i + j;
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%5d",matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
