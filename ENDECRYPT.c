
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], key[100];
    int i, choice;

    printf("Enter text: ");
    scanf("%99s", text);

    printf("Enter key: ");
    scanf("%99s", key);

    do
    {
        printf("\n1. Encrypt\n2. Decrypt\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                for (i = 0; text[i] != '\0'; i++)
                    text[i] ^= key[i % strlen(key)];

                printf("Encrypted text: %s\n", text);
                break;

            case 2:
                for (i = 0; text[i] != '\0'; i++)
                    text[i] ^= key[i % strlen(key)];

                printf("Decrypted text: %s\n", text);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
