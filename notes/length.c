#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string(NULL, "What's your name? ");
    int n = strlen(name);
    printf("%i\n", n);
}