#include <stdio.h>

int main() {
    int i, j, space;
    char ch = 'A';
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        for (space = rows - i; space > 0; space--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; 
            if (ch > 'Z')  
                ch = 'A';
        }

        printf("\n"); 
    }

    return 0;
}
