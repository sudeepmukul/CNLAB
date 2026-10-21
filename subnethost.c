#include <stdio.h>

int main()
{
    int a[10][10], visited[10] = {0};
    int queue[10], n, root;
    int front = 0, rear = 0;
    int i, u;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter root node: ");
    scanf("%d", &root);

    queue[rear++] = root;
    visited[root] = 1;

    printf("\nBroadcast tree:\n");

    while (front < rear)
    {
        u = queue[front++];

        for (i = 1; i <= n; i++)
        {
            if (a[u][i] == 1 && !visited[i])
            {
                printf("%d -> %d\n", u, i);
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    return 0;
}