
#include <stdio.h>

int main()
{
    int a[50], b[100];
    int n, i, j = 0, count = 0;

    printf("Enter frame length: ");
    scanf("%d", &n);

    printf("Enter bits (0s and 1s): ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        b[j++] = a[i];

        if (a[i] == 1)
            count++;
        else
            count = 0;

        if (count == 5)
        {
            b[j++] = 0;
            count = 0;
        }
    }

    printf("After stuffing: ");
    for (i = 0; i < j; i++)
        printf("%d", b[i]);

    return 0;
}
