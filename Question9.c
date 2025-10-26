#include <stdio.h>

int main() {
    int cities, days, times;
    int i, j, k;

    printf("Enter number of cities: ");
    scanf("%d", &cities);

    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("Enter number of readings per day (e.g., 3 for morning, afternoon, night): ");
    scanf("%d", &times);

    float temperature[cities][days][times];
    float highest[cities]; 

    for (i = 0; i < cities; i++) {
        printf("\n--- City %d ---\n", i + 1);
        for (j = 0; j < days; j++) {
            printf("Day %d:\n", j + 1);
            for (k = 0; k < times; k++) {
                printf("  Enter temperature for time %d: ", k + 1);
                scanf("%f", &temperature[i][j][k]);
            }
        }
    }

   
    for (i = 0; i < cities; i++) {
        float max = temperature[i][0][0]; 
        for (j = 0; j < days; j++) {
            for (k = 0; k < times; k++) {
                if (temperature[i][j][k] > max) {
                    max = temperature[i][j][k];
                }
            }
        }
        highest[i] = max;
    }

    
    printf("\n Highest Temperatures for Each City \n");
    for (i = 0; i < cities; i++) {
        printf("City %d: %.2fdefree centigrade\n", i + 1, highest[i]);
    }

    return 0;
}
