//credit card validating
//cs50 Problem set 1 credit

#include <stdio.h>
#include <stdbool.h>

//Function to get number of digits
int ndigit(long long card)
{
    int count = 0;
    while (card > 0)
    {
        card = card / 10;
        count ++;
    }
    return count;
}

//function to add digits
int digitsum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    return sum;
}

//check is card valid or not
bool isvalid(long long card)
{
    int sum = 0;
    bool double_digit = false;
    while (card > 0)
    {
        int digit = card % 10;

        if (double_digit)
        {
            sum += digitsum(2 * digit);

        }
        else
        {
            sum += digit;
        }
        card = card / 10;
        double_digit = !double_digit;
    }
    return (sum % 10 == 0);

}
//Identifing card type
char *getcardtyp(long long int card)
{
    while (card >= 100)
    {
        card = card / 10;
    }

    if (card >= 40 && card <= 49)
    {
        return "VISA";
    }
    else if (card >= 51 && card <= 55)
    {
        return "MASTERCARD";
    }
    else if (card == 34 || card == 37)
    {
        return "AMEX";
    }

    return "INVALID";
}


int main()
{
    long long int card;
    bool valid;
    printf("Enter Card Number: \n");
    scanf("%lld", &card);
    int digit = ndigit(card);

    //printf("%d",ndigit(card));
    if (digit == 15 || digit == 16 || digit == 13)
    {
        if (isvalid(card))
        {
            //char cardtyp[20] = getcardtyp(card);
            printf("%s\n", getcardtyp(card));
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

