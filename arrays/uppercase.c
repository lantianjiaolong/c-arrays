#include <_ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // change s[i] to uppercase
            // 如果它是小写字母，那么我们就可以将 s[i] 转换为大写字母
            // printf("%c", s[i] - 32);
            // printf("%c", s[i] - ('a' - 'A'));
            printf("%c", toupper(s[i]));   // 使用 toupper 函数将 s[i] 转换为大写字母
        }
        else
        {
            // Just print s[i]
            // 否则，如果它不是小写字母，就直接输出 s[i]
            printf("%c", s[i]);
        }
    }
    printf("\n");
}