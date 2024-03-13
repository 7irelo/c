#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string(NULL, "S: ");
    char *t = malloc(strlen(s) + 1);
    
    strcpy(t, s);
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}