#include <stdio.h>

int main() {
    int wards, patients, vitals;
    int i, j, k;

    printf("Enter number of wards: ");
    scanf("%d", &wards);

    printf("Enter number of patients per ward: ");
    scanf("%d", &patients);

    printf("Enter number of vital signs recorded per patient: ");
    scanf("%d", &vitals);

    float readings[wards][patients][vitals];

    // Input the vital readings
    for (i = 0; i < wards; i++) {
        printf("\n--- Ward %d ---\n", i + 1);
        for (j = 0; j < patients; j++) {
            printf("Patient %d:\n", j + 1);
            for (k = 0; k < vitals; k++) {
                printf("  Enter vital sign %d reading: ", k + 1);
                scanf("%f", &readings[i][j][k]);
            }
        }
    }

    // Process each ward
    for (i = 0; i < wards; i++) {
        printf("\n===== Ward %d Analysis =====\n", i + 1);

        // 1️⃣ Sum of each row → total for each patient
        printf("Total readings for each patient (Row Sum):\n");
        for (j = 0; j < patients; j++) {
            float rowSum = 0;
            for (k = 0; k < vitals; k++) {
                rowSum += readings[i][j][k];
            }
            printf("  Patient %d total = %.2f\n", j + 1, rowSum);
        }

        // 2️⃣ Sum of each column → total for each vital sign
        printf("\nTotal readings for each vital sign (Column Sum):\n");
        for (k = 0; k < vitals; k++) {
            float colSum = 0;
            for (j = 0; j < patients; j++) {
                colSum += readings[i][j][k];
            }
            printf("  Vital sign %d total = %.2f\n", k + 1, colSum);
        }
    }

    return 0;
}
