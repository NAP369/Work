#include <stdio.h>

// Struct for date of birth
struct Date {
    int day;
    int month;
    int year;
};

// Struct for address
struct Address {
    char street[50];
    int number;
    char city[50];
    char province[50];
};

// Struct for student
struct Student {
    char studentNumber[20];
    char name[50];
    struct Address address;
    char placeOfBirth[50];
    struct Date dateOfBirth;
};

int main() {
    struct Student students[5];

    printf("=== Input Data for 5 Students ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Student Number: ");
        scanf(" %[^\n]", students[i].studentNumber);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Street Name: ");
        scanf(" %[^\n]", students[i].address.street);

        printf("Street Number: ");
        scanf("%d", &students[i].address.number);

        printf("City: ");
        scanf(" %[^\n]", students[i].address.city);

        printf("Province: ");
        scanf(" %[^\n]", students[i].address.province);

        printf("Place of Birth: ");
        scanf(" %[^\n]", students[i].placeOfBirth);

        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &students[i].dateOfBirth.day,
                          &students[i].dateOfBirth.month,
                          &students[i].dateOfBirth.year);
    }

    // Optional: Display the data
    printf("\n=== Student Data ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Student Number: %s\n", students[i].studentNumber);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s No. %d, %s, %s\n", students[i].address.street,
                                                 students[i].address.number,
                                                 students[i].address.city,
                                                 students[i].address.province);
        printf("Place of Birth: %s\n", students[i].placeOfBirth);
        printf("Date of Birth: %02d-%02d-%04d\n", students[i].dateOfBirth.day,
                                                  students[i].dateOfBirth.month,
                                                  students[i].dateOfBirth.year);
    }

    return 0;
}

