#include <stdio.h>
#include "myHeader.h"

int main() {
  int choose,a,b;
  menu();
  printf("please choose a number above(1-5):");
  scanf("%d",&choose);
  if(choose >= 1 && choose <= 5) {
    switch(choose) {
    case 1: printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("The min number is: %d\n",min(a,b));
    break;

    case 2: printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("The max number is: %d\n",max(a,b));
    break;

    case 3: printf("Enter a number:");
    scanf("%d",&a);
    printf("Number's square is: %d\n",square(a));
    break;

    case 4: 
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Number's cube is: %d\n\n",cube(a));
    break;

    case 5:
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Number's absolute is: %d\n",absolute(a));
    break;

    default: printf("Invalid input\n");
    return 1;
  }
  }else {
    printf("You are sucked\n");
    return 1;
  }
  
  
return 0;
}

void menu() {
    printf("-------------\n");
    printf("-   MENU   --\n");
    printf("-------------\n");
    printf("1.Min\n");
    printf("2.Max\n");
    printf("3.Square\n");
    printf("4.Cube\n");
    printf("5.Absolute\n");

}
int min(int a,int b) {
    if(a < b) {
        return a;
    }else {
        return b;
    }
}
int max(int a,int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}

int square(int a) {
    return a*a;
}
int cube(int a) {
    return a*a*a;
}
int absolute(int a) {
    if (a <0 ) {
        return a*(-1);
    }else
    return a;
}