#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool valid_key(string key);
void encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    //condition check the user input the key
    if (argc != 2)
    {
        printf("Usage: .substitution key\n");
        return 1;
    }
    string key = argv[1];
    //check the key is valid or not
    if (!valid_key(key))
    {
        printf("Key must contain 26 charaters.");
        return 1;
    }
    // get user for plain text
    string plaintext = get_string("plaintext: ");
    // function
    encrypt(plaintext, key);
    return 0;
}
// boolean
bool valid_key(string key)
{
    char key_upper[27];
    //checking duplicates in a 26-letter substitution cipher key.
    bool seen[26] = {false};
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
        // convert to upper case
        key_upper[i] = toupper(key[i]);
        int index = key_upper[i] - 'A';
        if (seen[index])
        {
            return false;
        }
        seen[index] = true;
    }
    return true;
}
// function
void encrypt(string plaintext, string key)
{
    printf("ciphertext: ");
    // loop
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char encrypted_char;
            //substitution cipher while preserving the condition(uppercase or lowercase) of each letter.
            if (isupper(plaintext[i]))
            {
                encrypted_char = toupper(key[plaintext[i] - 'A']);
            }
            else
            {
                encrypted_char = tolower(key[plaintext[i] - 'a']);
            }
            printf("%c", encrypted_char);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
