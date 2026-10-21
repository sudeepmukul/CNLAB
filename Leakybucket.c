
#include <stdio.h>

int main()
{
    int bucket, n, size, out, i, input;

    printf("Enter bucket capacity: ");
    scanf("%d", &bucket);

    printf("Enter output rate: ");
    scanf("%d", &out);

    printf("Enter number of packets: ");
    scanf("%d", &n);

    size = 0;

    for(i = 1; i <= n; i++)
    {
        printf("Enter packet size: ");
        scanf("%d", &input);

        if(size + input <= bucket)
        {
            size += input;
            printf("Packet accepted\n");
        }
        else
            printf("Packet dropped\n");

        if(size >= out)
            size -= out;
        else
            size = 0;

        printf("Packets remaining: %d\n", size);
    }

    while(size > 0)
    {
        size -= out;
        if(size < 0)
            size = 0;

        printf("Packets remaining: %d\n", size);
    }

    return 0;
}
