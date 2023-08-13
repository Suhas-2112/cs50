#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 2;
    }

    string word = get_string("Plain text : ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            printf("%c", ((word[i] - 65 + atoi(argv[1])) % 26) + 65);
        }
        else if (islower(word[i]))
        {
            printf("%c", ((word[i] - 97 + atoi(argv[1])) % 26) + 97);
        }
        else
        {
            printf("%c", (word[i]));
        }
    }
    printf("\n");
    return 0;
}