#include <stdio.h>

int main() {
    char name[30];

    printf("Please Enter your name:");
    fgets(name,sizeof(name),stdin);
    printf("\nYour name is %s\n",name);
    
    return 0;
}