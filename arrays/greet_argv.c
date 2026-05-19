#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // printf("hello, %s\n", argv[0]); // 第一个参数是当前程序的可执行文件
    // printf("hello, %s\n", argv[1]); // 第二个参数是用户输入的内容
    // argc 是命令行参数的个数，argv 是命令行参数的数组
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
