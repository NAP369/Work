#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculate_age(int birth_day, int birth_month, int birth_year) {
    time_t t = time(NULL);
    struct tm current = *localtime(&t);

    int age = current.tm_year + 1900 - birth_year;

    // If birthday hasn't happened yet this year, subtract 1
    if (current.tm_mon + 1 < birth_month ||
        (current.tm_mon + 1 == birth_month && current.tm_mday < birth_day)) {
        age--;
    }

    return age;
}

int main() {
    FILE *file = fopen("birthdates.txt", "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int above51 = 0, between44_51 = 0, between36_43 = 0;
    int between28_35 = 0, below28 = 0;

    int day, month, year;
    while (fscanf(file, "%d/%d/%d", &day, &month, &year) == 3) {
        // Handle year conversion from yy to yyyy
        if (year <= 25) { // Assume years 00–25 are 2000–2025
            year += 2000;
        } else {
            year += 1900;
        }

        int age = calculate_age(day, month, year);

        if (age > 51) above51++;
        else if (age >= 44) between44_51++;
        else if (age >= 36) between36_43++;
        else if (age >= 28) between28_35++;
        else below28++;
    }

    fclose(file);

    printf("Employees above 51 years: %d\n", above51);
    printf("Employees between 44-51 years: %d\n", between44_51);
    printf("Employees between 36-43 years: %d\n", between36_43);
    printf("Employees between 28-35 years: %d\n", between28_35);
    printf("Employees below 28 years: %d\n", below28);

    return 0;
}

