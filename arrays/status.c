#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        // printf("Usage: %s <filename>\n", argv[0]);
        // 提示用户，缺少命令行参数
        printf("Missing command-line argument\n"); 
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;  // 0 表示程序执行成功，任何正数和负数则表示程序执行失败。
    // 因为程序执行的结果本质上只有两种状态：要么成功，要么失败。
}