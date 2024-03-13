#include <stdio.h>

int main(void)
{
    char *name;
    printf("What is your name: ");
    scanf("%s", name);
    printf("Hi, %s\n", name);
}