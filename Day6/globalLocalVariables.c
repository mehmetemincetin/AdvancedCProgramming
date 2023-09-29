#include <stdio.h>
int globalvariables = 7;
void increase();
void decrease();

int main() {
    printf("Global variables: %d\n",globalvariables);
    increase();
    printf("Global variables: %d\n",globalvariables);
    decrease();
    printf("Global variables: %d\n",globalvariables);
    
    return 0;
}
void increase() {
    globalvariables++;
}
void decrease() {
    globalvariables--;
}