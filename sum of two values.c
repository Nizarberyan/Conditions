#include <stdio.h>

int main() {
    int num1, num2,num3;
    printf("Enter two integers separated with a space: ");
    scanf("%d %d", &num1, &num2);
    if (num1 != num2) {
        num3 = num1 + num2;
        printf("the sum is: %d ", num3);
    } else {
        num3 = (num1 + num2) * 3;
        printf("The sum is: %d ", num3);
    }
}

