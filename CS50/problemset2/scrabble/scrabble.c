#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// int calculate_score(string word);

int calculate_score(string word)
{
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {

        if (isalpha(word[i]))
        {
            int index = toupper(word[i]) - 'A';
            score += points[index];
        }
    }
    return score;
}

int main()
{
    int score1, score2;
    // input from user
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");

    score1 = calculate_score(word1);
    score2 = calculate_score(word2);

    // winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
