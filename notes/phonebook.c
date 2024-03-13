#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    people[0].name = "Mother";
    people[0].number = "083 531 1059";

    people[1].name = "Father";
    people[1].number = "073 822 6372";

    string name = get_string(NULL, "Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}