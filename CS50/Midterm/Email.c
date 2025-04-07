#include <cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void check_email(string email)
{
    int length=strlen(email);
    int add=0;
    int dot=0;

    for(int i=0 ; i<length ; i++)
    {
        if(email[i] == '@')
        {
            add=1;
        }
        else if (email[i] == '.' && add )
        {
            dot=1;
        }
    }
    return add && dot;
}

int main()
{
    string email=get_string("Enter the email:");
    if(check_email (email))
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;

}
