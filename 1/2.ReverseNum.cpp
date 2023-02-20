//mingw的gdb本身不支持中文路径名造成的
#include <cstdio>
int Reverse(int n)
{
    int reverse = 0;
    int remain; // 余数
    while (true)
    {
        remain = n % 10;
        reverse = reverse * 10 + remain;
        n = n / 10;
        if (0 == n)
        {
            break;
        }
    }
    return reverse;
}

int main()
{
    int i = 0;
    for (i = 0; i <= 256; ++i)
    {
        if (i * i == Reverse(i * i))
        {
            printf("%d\n", i);
            printf("cbkjhd");
        }
    }
}
