 #include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("The number is zero and zero is null.\n");
        return 0;
    } else if (num%2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}
