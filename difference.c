#include <stdio.h>

int main() {
    int a[2][2], b[2][2], difference[2][2];
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            difference[i][j] = a[i][j] - b[i][j];

    printf("\n diffrence of the two matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", difference[i][j]);
        printf("\n");
    }

    return 0;
}
