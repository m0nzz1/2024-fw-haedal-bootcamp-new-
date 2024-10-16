#include <stdio.h>

int main(void)
{
    int a, b, c, result;
    int cnt[10] = {0, 0};
    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c;

    while (result > 0) // 세 수의 곱이 0이상일 때까지.
    {
        cnt[result % 10]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", cnt[i]);
    }
    return 0;
}