#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caesar_cipher(string plaintext, int k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (argv[1][i] < '0' || argv[1][i] > '9')
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    // Convert argv[1] from a `string` to an `int`
    // atoi is a function convert string to int
    int k = atoi(argv[1]);
    k = k % 26;
    // Prompt user for plaintext
    string plaintext = get_string("Enter palintext:");

    caesar_cipher(plaintext, k);
    return 0;
}
void caesar_cipher(string plaintext, int k)
{
    printf("ciphertext:");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char base =
                isupper(plaintext[i]) ? 'A' : 'a'; // Determine base for uppercase or lowercase
            char shift_char = (plaintext[i] - base + k) % 26 + base; // Shift character
            printf("%c", shift_char);
        }
        else
        {
            printf("%c", plaintext[i]); // Print non-alphabetic characters as-is
        }
    }
    printf("\n");
}
