
#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[50], ch;
    int i, j = 0, n, pos;

    printf("Enter string: ");
    scanf("%19s", a);

    n = strlen(a);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter character: ");
    scanf(" %c", &ch);

    strcpy(b, "dlestx");
    j = 6;

    for (i = 0; i < n; i++) {
        if (i == pos - 1) {
            b[j++] = 'd';
            b[j++] = 'l';
            b[j++] = 'e';
            b[j++] = ch;
            b[j++] = 'd';
            b[j++] = 'l';
            b[j++] = 'e';
        }

        if (i + 2 < n &&
            a[i] == 'd' && 
            a[i+1] == 'l' && 
            a[i+2] == 'e') {
                
            b[j++] = 'd';
            b[j++] = 'l';
            b[j++] = 'e';
        }

        b[j++] = a[i];
    }

    b[j] = '\0';
    strcat(b, "dleetx");

    printf("Frame after stuffing: %s\n", b);

    return 0;
}
