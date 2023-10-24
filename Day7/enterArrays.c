#include <stdio.h>

int main() {
     int i,mySquare[20];

     for(i = 0;i < 20; i++) {
          mySquare[i] = i * i;
          printf("My Square [%d]:%d\n",i,mySquare[i]);
     }
     return 0;
}
