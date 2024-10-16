#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    int score[1000] = {0, 0};
    int m = -10000;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);

        if (m < score[i])
            m = score[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += (float)score[i] / m * 100;
    }
    float aver = 0.0;
    aver = (float)sum / n;

    printf("%f", aver);

    return 0;
}