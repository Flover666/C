//设a, b, c均是0到9之间的数字，abc, bcc是两个三位数，且有abc + bcc =532。求满足条件的所有a, b,c的值。
//请输出所有满足题目条件的a,b,c的值。a,b,c之间用空格隔开。每个输出占一行。
#include <cstdio>
int main()
{
    int a, b, c; // 定义了名字为a b c的三个整型变量
    for (a = 0; a <= 9; ++a)
    {
        for (b = 0; b <= 9; ++b)
        {
            for (c = 0; c <= 9; ++c)
            {
                // abc + bcc = 532
                // 321 + 211
                // abc --> 100*a+10*b +c
                if (100 * a + 10 * b + c + 100 * b + 10 * c + c == 532)
                {
                    printf("%d %d %d\n", a, b, c);
                    // %d十进制整数
                }
            }
        }
    }
}