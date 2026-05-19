#include <cs50.h>
#include <stdio.h>

// string get_string(string prompt);
// int printf(string format, ...);

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
