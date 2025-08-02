#include <stdio.h>

// Define the studentScore structure
struct studentScore {
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int main() {
    struct studentScore student;

    // Input section
    printf("Enter Student Data:\n");

    printf("NIM: ");
    scanf(" %10s", student.nim);

    printf("Name: ");
    scanf(" %[^\n]", student.name);  // allows full name with spaces

    printf("Subject Code: ");
    scanf(" %4s", student.subjectCode);

    printf("SKS: ");
    scanf("%d", &student.sks);

    printf("Grade (A/B/C/...): ");
    scanf(" %c", &student.grade);

    // Output section
    printf("\n=== Student Score Data ===\n");
    printf("NIM         : %s\n", student.nim);
    printf("Name        : %s\n", student.name);
    printf("SubjectCode : %s\n", student.subjectCode);
    printf("SKS         : %d\n", student.sks);
    printf("Grade       : %c\n", student.grade);

    return 0;
}

