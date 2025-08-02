#include <stdio.h>

// Define the student structure
struct ipkmhs {
    char nim[11];
    char name[30];
    float gpa;
};

int main() {
    struct ipkmhs students[5];

    printf("=== Input 5 Students Data ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("NIM: ");
        scanf(" %10s", students[i].nim);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // allows space in name

        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Display students grouped by GPA
    printf("\nStudents with GPA >= 3.0:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].gpa >= 3.0) {
            printf("%s\n", students[i].name);
        }
    }

    printf("\nStudents with GPA < 3.0:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].gpa < 3.0) {
            printf("%s\n", students[i].name);
        }
    }

    return 0;
}

