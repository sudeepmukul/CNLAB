
#include <stdio.h>
#include <stdlib.h>

struct frame {
    int fslno;
    char finfo[20];
};

struct frame arr[10];
int n;

void sort()
{
    int i, j, ex;
    struct frame temp;

    for(i = 0; i < n; i++)
    {
        ex = 0;

        for(j = 0; j < n-i-1; j++)
            if(arr[j].fslno > arr[j+1].fslno)
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                ex++;
            }

        if(ex == 0) break;
    }
}

int main()
{
    int i;

    printf("Enter the number of frames: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
        return 1;

    for(i = 0; i < n; i++)
    {
        arr[i].fslno = rand() % 50;

        printf("Enter frame contents for sequence number %d: ",
               arr[i].fslno);
        scanf("%19s", arr[i].finfo);
    }

    sort();

    printf("\nFrames in sequence:\n");
    for(i = 0; i < n; i++)
        printf("%d\t%s\n", arr[i].fslno, arr[i].finfo);

    return 0;
}
