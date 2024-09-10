#include <stdio.h>

int main() {
    int choice, year;

    printf("Menu:\n");
    printf("1. Convert to Months\n");
    printf("2. Convert to Days\n");
    printf("3. Convert to Hours\n");
    printf("4. Convert to Minutes\n");
    printf("5. Convert to Seconds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (choice) {
        case 1:
            printf("%d years = %d months\n", year, year * 12);
            break;
        case 2:
            printf("%d years = %d days\n", year, year * 365);
            break;
        case 3:
            printf("%d years = %d hours\n", year, year * 365 * 24);
            break;
        case 4:
            printf("%d years = %d minutes\n", year, year * 365 * 24 * 60);
            break;
        case 5:
            printf("%d years = %d seconds\n", year, year * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}