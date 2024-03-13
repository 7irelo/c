#include <stdio.h>

int main(void)
{
    char *name = "Eric";
    char *surname = "Ncube";
    printf("Name: %i\n", name);
    printf("Surname: %i\n", surname);
    printf("Name: %p\n", name);
    printf("Surname: %p\n", surname);
    char *temp = name;
    name = surname;
    surname = temp;
    printf("Name: %i\n", *name);
    printf("Surname: %i\n", *surname);
    printf("Name: %p\n", *name);
    printf("Surname: %p\n", *surname);
}