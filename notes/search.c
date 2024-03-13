#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"cat", "hat", "black", "jack", "dax", "neck", "rack"};
    string s = get_string(NULL, "Search: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}