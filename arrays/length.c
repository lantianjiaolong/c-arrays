#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");

    // count characters in name
    // 计算字符串的长度
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}