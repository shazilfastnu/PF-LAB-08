#include <stdio.h>

int main() {
    int R, C; 
    
    printf("Enter the number of students (Rows): ");
    if (scanf("%d", &R) != 1 || R <= 0) {
        printf("Input error: Invalid number of rows. Exiting.\n");
        return 1;
    }
    
    printf("Enter the number of subjects (Columns): ");
    if (scanf("%d", &C) != 1 || C <= 0) {
        printf("Input error: Invalid number of columns. Exiting.\n");
        return 1;
    }


    int student_scores[R][C];
 
    int subject_scores[C][R];

    printf("\nNow enter the scores one by one:\n");

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Enter score for Student %d, Subject %d: ", i + 1, j + 1);
            if (scanf("%d", &student_scores[i][j]) != 1) {
                printf("Input error: Score must be an integer. Exiting.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            subject_scores[j][i] = student_scores[i][j];
        }
    }

    printf("\n--- RESULTS ---");
    

    printf("\nOriginal Data View: Rows = Students, Columns = Subjects\n");
    printf("--- Student Scores (%d Rows x %d Columns) ---\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%4d", student_scores[i][j]); 
        }
        printf("\n");
    }

    printf("\nTransposed Data View: Rows = Subjects, Columns = Students\n");
    printf("--- Subject Scores (%d Rows x %d Columns) ---\n", C, R);
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            printf("%4d", subject_scores[i][j]); 
        }
        printf("\n");
    }

    return 0;
}