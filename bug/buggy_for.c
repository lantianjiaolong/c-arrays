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
    // 错误的循环条件，导致 i 从 0 开始递增，满足 i <= n 的条件，但是打印了 n+1 个井号，逻辑错误。
    // 当 i 从 0 开始递增时，循环条件应该是 i < n，而不是 i <= n。
    // 当 i 从 1 开始递增时，循环条件应该是 i <= n，这样才能正确打印 n 行井号。
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("#\n");
    // }
    for (int i = 1; i <= n; i++)
    {
        // printf("%i #\n", i);
        printf("i is %i\n", i);
        printf("#\n");
    }
}
