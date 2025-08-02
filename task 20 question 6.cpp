#include <stdio.h>

// Define the studentScore structure
struct studentScore {
    char subjectCode[5];
    int sks;
    char grade;
};

// Function to convert grade to weight
int gradeToWeight(char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'E': return 0;
        default: return 0; // invalid grade
    }
}

int main() {
    struct studentScore subjects[5];
    int totalSKS = 0;
    int totalWeightedScore = 0;

    printf("=== Input 5 Subject Scores for 1st Semester ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nSubject %d:\n", i + 1);

        printf("Subject Code: ");
        scanf(" %4s", subjects[i].subjectCode);

        printf("SKS: ");
        scanf("%d", &subjects[i].sks);

        printf("Grade (A-E): ");
        scanf(" %c", &subjects[i].grade);

        int weight = gradeToWeight(subjects[i].grade);
        totalSKS += subjects[i].sks;
        totalWeightedScore += (weight * subjects[i].sks);
    }

    float gpa = 0;
    if (totalSKS > 0) {
        gpa = (float)totalWeightedScore / totalSKS;
    }

    // Output GPA
    printf("\n=== GPA Result ===\n");
    printf("Total SKS      : %d\n", totalSKS);
    printf("Total Weighted : %d\n", totalWeightedScore);
    printf("GPA            : %.2f\n", gpa);

    return 0;
}

