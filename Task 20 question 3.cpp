#include <stdio.h>

// Define the automobile structure
struct automobile {
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main() {
    struct automobile cars[5];

    printf("=== Input Data for 5 Cars ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nCar %d:\n", i + 1);

        printf("Model (max 7 characters): ");
        scanf(" %7s", cars[i].model);

        printf("Year: ");
        scanf("%d", &cars[i].year);

        printf("Engine Power (in HP): ");
        scanf("%d", &cars[i].engine_power);

        printf("Weight (in kg): ");
        scanf("%f", &cars[i].weight);
    }

    // Display all data
    printf("\n=== Car Information ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Model        : %s\n", cars[i].model);
        printf("Year         : %d\n", cars[i].year);
        printf("Engine Power : %d HP\n", cars[i].engine_power);
        printf("Weight       : %.2f kg\n", cars[i].weight);
    }

    return 0;
}

