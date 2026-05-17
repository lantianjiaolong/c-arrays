#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，根据用户输入的数字循环打印指定数量的井号行
 *
 * 提示用户输入一个整数，然后从 1 递增到该整数，每行打印一个井号。
 * 注意：当前循环条件存在 bug（i-- 应为 i++），会导致无限循环。
 *
 * @return 程序正常结束时返回 0
 * @throws 若用户输入非整数，get_int 将提示重新输入
 */
int main(void)
{
    int n = get_int("Number: ");
    for (int i = 1; i <= n; i++)
    {
        // printf("#\n");
        printf("%i #\n", i);
    }
}
