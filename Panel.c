#include <stdio.h>
int main() {
    int R, C;
    int matrix[5][5];
    int transpose[5][5];
    printf("Enter number of panels (R, up to 5): ");
    scanf("%d", &R);
    printf("Enter number of hours (C, up to 5): ");
    scanf("%d", &C);
    printf("Enter the panel output data (%d x %d):\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Panel %d, Hour %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal Matrix (Rows = Panels, Columns = Hours):\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposed Matrix (Each row shows one hour):\n");
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
 return 0;
}
