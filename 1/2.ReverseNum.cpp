//mingw��gdb����֧������·������ɵ�
#include <cstdio>
int Reverse(int n)
{
    int reverse = 0;
    int remain; // ����
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
