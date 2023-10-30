#include <stdio.h>

int main() {
    char name[30];

    printf("Please enter your name:");
    fgets(name,sizeof(name),stdin);

    printf("Your name is %s",name);

    return 0;
}