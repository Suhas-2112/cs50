
#include <stdio.h>
//#include <cs50.h>

int main(void)
{
    //limit input in the range of 1 to 8
    int size, i, j;
    do
    {
        printf("Enter height: ");
        scanf("%d", &size);

    }
    while (size < 1 || size > 8);

    //printing pattern
    for (i = 1; i <= size; i++)
    {
        // Print spaces before the hashtags
        for (j = 1; j <= (size - i); j++)
        {
            printf(" ");
        }

        // Print hashtags
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

}