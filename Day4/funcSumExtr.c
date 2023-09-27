#include <stdio.h>

int sumNumbers(int x, int y) {
    return x+y;
}
int extractionNumbers(int x, int y) {
    return x - y;
}
int main() {
    int myNumber = extractionNumbers(sumNumbers(2,5),4);
    printf("Result is a %d\n",myNumber);

    return 0;
}