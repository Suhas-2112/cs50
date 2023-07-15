//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //limit input in the range of 1 to 8
    int size, i, j, k;
    do
    {
        printf("Enter height: ");
        scanf("%d", &size);

    }
    while (size < 1 || size > 8);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}