#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[100];
    int length, has_lower = 0, has_upper = 0, has_number = 0, has_symbol = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);


    for (int i=0; i<length; i++)
    {
        if (isupper(password[i]))
        {
            has_upper = 1;
        }
        else if (islower(password[i]))
        {
            has_lower = 1;
        }
        else if (isdigit(password[i]))
        {
            has_number = 1;
        }
        else
        {
            has_symbol = 1;
        }
    }

    if (length >= 10 && has_lower && has_upper && has_number && has_symbol)
    {
        printf("Your Password is very Strong");
    }
    else if (length > 7 && length < 10 && has_lower && has_upper && has_number && has_symbol)
    {
        printf("Your Password is Strong");
    }
    else if (length >= 6 && ((has_upper && has_number) || (has_upper && has_symbol)))
    {
        printf("Your Password is Moderate");
    }
    else
    {
        printf("Your Password is Weak");
    }

    printf("\n");
}
