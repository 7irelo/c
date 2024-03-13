#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main()
{
    int height = get_int("Height: ");
    /*
    if (height <= 3)
    {
        printf("#\n");
        printf("##\n");
        printf("###\n");
        return 0;
    }
    else
    {
        printf("#\n");
        printf("##\n");
    }
    */

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("###");
        printf("\n");
    }
}