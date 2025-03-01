#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// function counting
int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        // if the text is the alphabate
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}
// count words
int count_words(string text)
{
    /* declear count as 1 because of the last word doesnt have space so to add the last words
    we need to add count as 1 from the start*/
    int count = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

// count letters
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        // every sentences might end with . ? or !
        if ((text[i] == '.' || text[i] == '?' || text[i] == '!'))
        {
            count++;
        }
    }
    return count;
}

/* declear the condition and  */
int main()
{
    string text = get_string("Text: ");

    // declear variable from the above function
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    if (words == 0)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    // declear and calculate the number of letter
    float L = ((float) letters / words) * 100;
    // declear calculate the numbr of sentences
    float S = ((float) sentences / words) * 100;

    // Compute the Coleman-Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // print the results
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        // round the result od index to get interger
        printf("Grade %d\n", (int) round(index));
    }
}
