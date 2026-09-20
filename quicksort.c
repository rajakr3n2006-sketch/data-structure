#include <stdio.h>

int main()
{
    int a[10][10], triplet[100][3];
    int r, c, i, j, k = 1, count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] != 0)
                count++;
        }
    }

    triplet[0][0] = r;
    triplet[0][1] = c;
    triplet[0][2] = count;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != 0)
            {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = a[i][j];
                k++;
            }
        }
    }

    printf("\nTriplet Representation:\n");
    printf("Row\tColumn\tValue\n");

    for(i = 0; i <= count; i++)
    {
        printf("%d\t%d\t%d\n",
               triplet[i][0],
               triplet[i][1],
               triplet[i][2]);
    }

    return 0;
}