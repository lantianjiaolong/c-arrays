#include <cs50.h>
#include <stdio.h>

int main()
{
    // 字符串容器，用于存储字符的数组，以 '\0' 作为终止字符，表示 NUL
    string s = "HI!";
    printf("%s\n", s);
    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    string t = "BYE!";
    printf("%s\n", t);
}