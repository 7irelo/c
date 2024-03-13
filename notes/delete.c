#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
#include <string.h>

int main(void)
{
    typedef struct person
    {
        string name;
        int age;
        struct person *p;
    }
    person;

    person people[4];
    for (int i = 0; i < 4; i++)
    {
        people[i].name = get_string(NULL, "Name: ");
        people[i].age = get_int("Age: ");
    }

    for (int i = 0; i < 4; i++)
    {
        if (people[i].age > people[i + 1].age)
        {
            person *temp = &people[i];
            printf("%i", *temp);
            people[i].p = &people[i + 1];

        }
    }
}