
#include <stdio.h>

#define MAX_NODES 10
#define INF 9999

int main() {
    int cost[MAX_NODES][MAX_NODES];
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (cost[i][k] + cost[k][j] < cost[i][j])
                    cost[i][j] = cost[i][k] + cost[k][j];

    printf("\nShortest Path Matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("\nfor router %d is\n", i + 1);
        for (int j = 0; j < n; j++) {
            if (cost[i][j] == INF)
                printf("node %d via - Distance INF\t", j + 1);
            else{
                printf("node %d via %d Distance %d\t", j + 1, j + 1, cost[i][j]);
                printf("\n");
            }
        }
    }

    printf("\n");

}