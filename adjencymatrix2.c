
#include <stdio.h>

int main() {
    int V, A[20][20], adj[20][20];
    int degree[20] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter adjacency matrix:\n");

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (A[i][j] == 1) {
                adj[i][degree[i]++] = j;
            }
        }
    }

    printf("Adjacency List:\n");

    for (int i = 0; i < V; i++) {
        printf("%d: ", i);
        for (int j = 0; j < degree[i]; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
