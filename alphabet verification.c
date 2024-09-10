#include <stdio.h>

char letter;

int main() {
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z') {
        printf("this letter is part of the alphabet");
        if (letter >= 'A' && letter <= 'Z') {
            printf(" and it is uppercase");
        } else {
            printf(" and it is lowercase");
        }
    } else {
        printf("this letter is not part of the alphabet");
    }

    return 0;
}