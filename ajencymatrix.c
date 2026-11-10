
#include <stdio.h>

int main() {
    int V, E, u, v;
    int A[20][20] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    for (int i = 0; i < E; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);

        A[u][v] = 1;
        A[v][u] = 1;
    }

    printf("Adjacency Matrix:\n");

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
