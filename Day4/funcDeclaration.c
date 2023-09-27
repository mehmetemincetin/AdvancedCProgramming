#include <stdio.h>

void theMessage(); //Declaration
int sumNumber(int,int);//Declaration

int main() {
    int result = sumNumber(5,11);
    printf("Result is %d\n",result);
    theMessage();
    return 0;
}
void theMessage() {
    printf("I love C Language\n");//Definition
    
}
int sumNumber(int x,int y) {
    return x+y;
}