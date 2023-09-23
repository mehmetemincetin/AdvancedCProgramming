#include <stdio.h>

int main() {
    int num1,num2,num3,max,min;
    printf("Please enter num1:");
    scanf("%d",&num1);
    
    printf("Please enter num2:");
    scanf("%d",&num2);
    
    printf("Please enter num3:");
    scanf("%d",&num3);
    
    if(num1 > num2 && num2>num3) {
        max = num1;
      
    }else if (num2 > num3) {
        max = num2;
       
    }else {
        max = num3;
       
    }
    if(num1<num2 && num2<num3) {
        min = num1;

    }else if(num2<num3) {
        min = num2;
       
    }else {
        min = num3;
        
    }
    printf("Max number is:%d\n",max);
    printf("Min number is:%d\n",min);
    return 0;
}