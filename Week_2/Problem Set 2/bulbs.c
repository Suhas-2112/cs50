#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

// int rev(int n)
// {
//     int reverse=0,remainder;
//     while (n != 0)
//     {
//         remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n /= 10;
//     }
//     return reverse;
// }

// int decimalToBinary(int decimalNumber) {
//     int binary = 0;
//     int placeValue = 1;

//     while (decimalNumber > 0) {
//         int remainder = decimalNumber % 2;
//         binary += remainder * placeValue;
//         placeValue *= 10;
//         decimalNumber /= 2;
//     }

//     return binary;
// }

int main(void)
{
    // TODO
    string msg = get_string("Message: ");
    for (int i = 0; i < strlen(msg); i++)
    {
        for (int j = 7; j >= 0; j--)
        {
            int bit = (msg[i] >> j) & 1;
            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
