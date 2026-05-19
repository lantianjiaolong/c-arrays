#include <cs50.h>
#include <stdio.h>

int main()
{
    // 定义一个 int 类型的常量，告诉计算机，不允许修改这个数字
    // 这是一种保护机制，既防止自己不小心犯错，也防止某些粗心的同事擅自修改不该动的数值。
    const int N = 3;
    // 声明一个名为 scores 的变量，它是一个包含 3 个整数的数组
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        // 从用户处获取输入的成绩，依次存入到数组中
        scores[i] = get_int("Score: ");
    }
 
    // Print average
    // 打印成绩的平均值
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}