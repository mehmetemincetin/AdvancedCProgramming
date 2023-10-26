#include <stdio.h>

int main() {
    double myValue,myArray[10];
    int choice,index;

    do{
        printf("1. Write to array\n");
        printf("2. Read to array\n");
        printf("Please enter your chocice(-1 to Exit):");
        scanf("%d",&choice);
        if(choice != 1 && choice != 2) {
        printf("You should enter 1 or 2 dijits.\n");
        continue;
        }
        printf("Please enter your index:");
        scanf("%d",&index);

        switch(choice) {
            case 1: printf("Please enter your value:");
            scanf("%lf",&myValue);
            printf("The writing operation is successful.\n");
            myArray[index] = myValue;
            break;

            case 2: printf("Your index to value is [%d]: %.2lf\n",index,myArray[index]);
            break;

            default: printf("Invalid input!"); break;
        }
    }while(choice != -1);
  return 0;
}