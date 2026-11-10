
#include <stdio.h>

int main() {
    int V, E, u, v;
    int adj[20][20] = {0};
    int degree[20]={0};

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    for (int i = 0; i < E; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);

        adj[u][degree[u]++]=v;
    adj[v][degree[v]++]=u;
    }

    printf("Adjacency List:\n");

    for (int i = 0; i < V; i++) {
        printf("%d",i);
        for (int j = 0; j < degree[i]; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
