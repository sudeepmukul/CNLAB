
#include <stdio.h>

int main()
{
    int a[10][10], d[10], v[10] = {0};
    int n, i, j, s, min, u;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter cost matrix (0 = no edge):\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Enter source node (1 to %d): ", n);
    scanf("%d", &s);
    s--;

    for(i=0;i<n;i++)
        d[i] = (i == s) ? 0 : 9999;

    for(i=0;i<n;i++)
    {
        min = 9999;
        u = -1;

        for(j=0;j<n;j++)
            if(!v[j] && d[j]<min)
                min=d[j], u=j;

        if(u==-1) break;
        v[u]=1;

        for(j=0;j<n;j++)
            if(!v[j] && a[u][j]>0 &&
               d[u]+a[u][j]<d[j])
                d[j]=d[u]+a[u][j];
    }

    printf("Shortest distances:\n");
    for(i=0;i<n;i++)
        printf("To node %d = %d\n",i+1,d[i]);

    return 0;
}
