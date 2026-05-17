#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，提示用户输入姓名并打印问候语。
 *
 * 从标准输入读取用户姓名，然后向标准输出打印格式化的问候消息。
 *
 * @return 程序退出状态码，成功返回 0。
 */
int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
    return 0;
}
