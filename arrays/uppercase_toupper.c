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
        printf("%c", toupper(s[i]));   // 使用 toupper 函数将 s[i] 转换为大写字母
    }
    printf("\n");
}

