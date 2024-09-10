#include <stdio.h>

char letter;
int asciiValue;
int main() {

    printf(" enter a letter: ");
    scanf("%c", &letter);

    asciiValue = (int)letter;

    if (asciiValue >= 65 && asciiValue <= 90) {
        printf("the letter is uppercase");
        return 0;
    } else {
        printf("the letter is lowercase");
    }
    return 0;

}