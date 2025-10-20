#include <stdio.h>

int main() {
    int readings[2][2][3];
    int i, j, k;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter readings for Joint %d, Movement %d (x y z): ", i + 1, j + 1);
            scanf("%d%d%d", &readings[i][j][0], &readings[i][j][1], &readings[i][j][2]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) {
                if(readings[i][j][k] < 0)
                    readings[i][j][k] = -readings[i][j][k];
            }
        }
    }

    printf("\nNormalized Sensor Readings:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Joint %d Movement %d : %d %d %d\n", i + 1, j + 1,
                   readings[i][j][0], readings[i][j][1], readings[i][j][2]);
        }
    }

    return 0;
}