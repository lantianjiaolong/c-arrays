#include <cs50.h>
#include <stdio.h>

int main()
{
    // 声明一个名为 scores 的变量，它是一个包含 3 个整数的数组
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        // 从用户处获取输入的成绩，依次存入到数组中
        scores[i] = get_int("Score: ");
    }

    // Print average
    // 打印成绩的平均值
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}