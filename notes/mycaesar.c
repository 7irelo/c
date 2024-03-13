#include <cs50.h>
#include <cs50.C>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        int k = atoi(argv[1]);

        string text = get_string(NULL, "Text: ");

        printf("ciphertext: ");

        for (int j = 0; j < strlen(text); j++)
    }
}