#include <stdio.h>
int main(){
    int frames[50],n,i,w;
    
    printf("Enter number of frames: ");
    scanf("%d", &n);

    printf("Enter window size: ");
    scanf("%d", &w);

    if(n<1 || n>50 || w<1 || w>n){
        printf("Invalid Input");
        return 0;
    }
    printf("Enter frame values: ");
    for (i = 0; i < n; i++)
        scanf("%d", &frames[i]);

    for (i = 0; i < n; i++) {
        printf("%d ", frames[i]);

    if((i+1) % w == 0 || i == n-1){
        printf("ACK\n");
    }
}
return 0;
}