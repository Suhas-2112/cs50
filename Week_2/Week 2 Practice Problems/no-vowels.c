// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
// a-6
// e-3
// i-1
// o-0
// u-u
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        switch (argv[1][i])
        {
            case 'a':
                printf("6");
                break;
            case 'e':
                printf("3");
                break;
            case 'i':
                printf("1");
                break;
            case 'o':
                printf("0");
                break;
            default:
                printf("%c", argv[1][i]);
                break;
        }
    }
    printf("\n");
}
