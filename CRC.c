
#include <stdio.h>

int main()
{
    int d[100], g[20], t[100];
    int n, m, i, j, choice;

    printf("1.Generate CRC  2.Check CRC\n");
    scanf("%d", &choice);

    printf("Enter data length: ");
    scanf("%d", &n);

    printf("Enter data: ");
    for(i=0;i<n;i++) scanf("%d",&d[i]);

    printf("Enter generator length: ");
    scanf("%d", &m);

    printf("Enter generator: ");
    for(i=0;i<m;i++) scanf("%d",&g[i]);

    if(choice==1)
    {
        for(i=n;i<n+m-1;i++) d[i]=0;
        n=n+m-1;
    }

    for(i=0;i<n;i++) t[i]=d[i];

    for(i=0;i<=n-m;i++)
    {
        if(t[i])
            for(j=0;j<m;j++)
                t[i+j]^=g[j];
    }

    if(choice==1)
    {
        printf("Codeword: ");
        for(i=0;i<n;i++)
            printf("%d", i<n-m+1 ? d[i] : t[i]);
        printf("\nCRC: ");
        for(i=n-m+1;i<n;i++) printf("%d",t[i]);
    }
    else
    {
        for(i=n-m+1;i<n;i++)
            if(t[i]) {
                printf("Error detected\n");
                return 0;
            }
        printf("No error detected\n");
    }

    return 0;
}
