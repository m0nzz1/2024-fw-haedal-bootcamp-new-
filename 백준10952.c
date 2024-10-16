#include <stdio.h>

int main(void)
{
    int a, b;
    for (int i = 0; i < 1000; i++)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        else
            printf("%d\n", a + b);
    }
    return 0;
}