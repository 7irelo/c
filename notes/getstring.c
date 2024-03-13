#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    string s = get_string(NULL, "What's your name? ");
    printf("Hi, %s\n", s);
}