#include <stdio.h>
#include <string.h>

int main() {
    char date_string[11];
    int month, day, year;
    const char *month_names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Enter a date in the format MM/DD/YYYY: ");
    scanf("%s", date_string);

    if (sscanf(date_string, "%d/%d/%d", &month, &day, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    printf("%d-%s-%d\n", day, month_names[month - 1], year);

    return 0;
}