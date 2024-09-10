#include <stdio.h> 

float userchoice;

int main() {
    printf("enter a number: ");
    scanf("%f", &userchoice);

    if (userchoice > 0) {
        printf("the number is positive ");
    } else if (userchoice < 0) {
        printf ("the number is negative");
    } else {
        printf("the number is zero and it's considered null");
    };
    return 0;
}
