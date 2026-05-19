#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}