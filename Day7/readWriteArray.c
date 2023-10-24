#include <stdio.h>

int main () {
    double myValue,myArray[10];
    int choice,index;

    do{
        printf("\t1. Write to array\n");
        printf("\t2. Read from array\n");
        printf("Make a choice (-1 to Exit):");
        scanf("%d",&choice);
        if(choice == -1) break;
        if(choice != 1 && choice != 2) {
            printf("Are you kidding me!\n");
            continue;
        }
        printf("Enter array index:");
        scanf("%d",&index);
        if(index < 0 || index > 9) {
            printf("You should be in the range of 0-9\n");
            continue;
        }
        switch(choice) {
            case 1: printf("Enter the value:");
            scanf("%lf",&myValue);
            myArray[index] = myValue;
            printf("The write operation is successful.\n\n");
            break;

            case 2: printf("myArray[%d]: %.2lf\n",index,myArray[index]);
            break;
        }
    }while(choice != -1);
    return 0;
}