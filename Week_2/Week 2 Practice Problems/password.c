// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int l = 0, u = 0, n = 0, s = 0;
    for (int i = 0; i < strlen(password); i++)
    {
        if (islower(password[i]))
        {
            l++;
        }
        if (isdigit(password[i]))
        {
            n++;
        }
        if (isupper(password[i]))
        {
            u++;
        }
        if (ispunct(password[i]))
        {
            s++;
        }
    }
    if (l > 0 && u > 0 && n > 0 && s > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
