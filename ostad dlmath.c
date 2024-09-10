#include <stdio.h>

int main() {
    float grade;

    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade < 10) {
        printf("This is a failing grade.\n");
    } else if (grade <= 10 && grade > 12) {
        printf("This is a passable grade.\n");
    } else if (grade >= 12 && grade < 14) {
        printf("This is a fairly good grade.\n");
    } else if (grade >= 14 && grade < 16) {
        printf("This is a good grade.\n");
    } else if (grade >= 16) {
        printf("This is an excellent grade.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}