#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void count_letter(string word, int *letter, int *words, int *sentence)
{
    *letter = 0;
    *sentence = 0;
    *words = 1;
    for (int i = 0; i < strlen(word); i++)
    {
        if ((word[i] >= 97 && word[i] <= 122) || (word[i] >= 65 && word[i] <= 90))
        {
            (*letter)++;
        }
        if (word[i] == 32)
        {
            (*words)++;
        }
        if (word[i] == 46 || word[i] == 33 || word[i] == 63)
        {
            (*sentence)++;
        }
    }
}

int main(void)
{
    int letter, words, sentence;
    string word = get_string("Enter string : ");
    count_letter(word, &letter, &words, &sentence);
    double L = 100 * letter / (double) words;
    double S = 100 * sentence / (double) words;

    int index = round(0.0588 * L - 0.296 * S - 15.8);
    /*
    printf("%d\n",letter);
    printf("%d\n",sentence);
    printf("%d\n",words);

    printf("%lf\n",L);
    printf("%lf\n",S);
    printf("%d\n",index);
    */
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}