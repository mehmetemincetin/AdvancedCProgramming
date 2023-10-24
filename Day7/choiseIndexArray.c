#include <stdio.h>
int main() {
    double myArray[10],myValue;
    int choice,index;

    do{
    printf("Make a choise (-1 to Exit):\n");
    printf("\t1.Write to array\n");
    printf("\t2.Read to array\n");
    scanf("%d",&choice);
    if(choice == -1) { break; }
    if(choice != 1 && choice != 2){  printf("Are you kidding me\n"); continue; }
    printf("Enter array index:");
    scanf("%d",&index);
    if(index < 0 || index > 9) {printf("you should be enter between 0 and 9."); continue;}
    switch(choice) {
        case 1: printf("Enter the value:");
        scanf("%lf",&myValue);
        myArray[index] = myValue;
        printf("The write operation is successful\n\n");
        break;
    
        case 2: printf("myArray[%d]:%.2lf\n\n",index,myArray[index]); break;
    }

    }while(choice != -1);
    return 0;
}
