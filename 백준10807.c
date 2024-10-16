#include <stdio.h>

int main(void)
{
    int n, v;
    int cnt = 0;
    int arr[100] = {0, 0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}