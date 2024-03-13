#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void swap(int *a, int *b);

int main()
{
    string s = get_string(NULL, "Name: ");
    printf("Hi, %s\n", s);
}