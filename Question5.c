#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, k;
    int total = 0;
    int pixelCount;
    float average;

    printf("Enter number of rows (height of image): ");
    scanf("%d", &rows);

    printf("Enter number of columns (width of image): ");
    scanf("%d", &cols);

    int image[rows][cols][3]; 

    printf("\nEnter RGB values for each pixel (0–255):\n");

   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Pixel[%d][%d]:\n", i + 1, j + 1);
            for (k = 0; k < 3; k++) {
                if (k == 0)
                    printf("  R: ");
                else if (k == 1)
                    printf("  G: ");
                else
                    printf("  B: ");
                scanf("%d", &image[i][j][k]);
                total += image[i][j][k];  
            }
        }
    }

    
    pixelCount = rows * cols * 3;

    
    average = (float) total / pixelCount;

    printf("\nAverage Color Intensity of Image: %.2f\n", average);

    return 0;
}
