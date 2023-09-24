#include <stdio.h>

int main() {
    int angle1,angle2,angle3;
    
    printf("Please enter angle1:");
    scanf("%d",&angle1);
    
    printf("Please enter angle2:");
    scanf("%d",&angle2);
    
    printf("Please enter angle3:");
    scanf("%d",&angle3);
    
    if(angle1 + angle2 + angle3 != 180) {
        printf("This is not triangle!");
    }else {
        if(angle1 == 60 && angle2 == 60 && angle3 == 60 ) {
            printf("This triangle is equilateral.");
        }else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            printf("This triangle is a isosceles.");
        }else {
            printf("This triangle is scalene");
        }
    }
    return 0;
}