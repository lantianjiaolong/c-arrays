#include <cs50.h>
#include <stdio.h>

// 函数声明，定义在 main 函数之前，以便 main 函数能够调用它，否则在 main 函数之后定义 print_column 函数会导致编译错误
void print_column(int height);

/**
 * @brief 程序入口函数，获取用户输入的高度并打印对应列
 *
 * 提示用户输入一个整数高度，然后调用 print_column 函数
 * 打印指定高度的列。
 *
 * @return 程序退出状态码（隐式返回 0）
 */
int main(void)
{  
    int h = get_int("Height: ");
    print_column(h);
}

/**
 * @brief 打印指定高度的由 '#' 组成的垂直列
 *
 * 从上到下逐行打印 '#' 字符，每行一个，共打印 height 行。
 *
 * @param height 要打印的列高度（行数），必须为非负整数
 */
void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
