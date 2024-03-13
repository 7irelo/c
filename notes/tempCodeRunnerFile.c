#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int height;
int space
int get_size(void);
void print_grid(int height);

int main(void)
{
    // Get height of pyramid
    get_size();
    
    // Print pyramid
    print_grid(height);
}

int get_size(void)