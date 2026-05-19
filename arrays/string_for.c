#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str = get_string("Input:  ");
    printf("Output: ");
    // for loop to print string
    // 方法一：
    // int length = strlen(str);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%c", str[i]);
    // }

    // 方法二：
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}