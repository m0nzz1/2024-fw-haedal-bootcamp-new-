#include <stdio.h>

int main(void)
{
    int num = 0;
    int arr[10];
    int arr1[43] = {0, 0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

        num = arr[i] % 42;
        arr1[num]++;
    }

    int cnt = 0;

    for (int i = 0; i <= 42; i++)
    {
        if (arr1[i] != 0)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}