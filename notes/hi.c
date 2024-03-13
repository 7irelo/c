#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    string s = get_string(NULL, "What's your name? ");
    printf("Hi Agent %i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4]);
}