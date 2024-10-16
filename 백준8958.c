#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80][80];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int score = 0;
        int cnt = 0;
        scanf("%s", str[i]);
        for (int j = 0; j < strlen(str[i]); j++) 
        {
            if (str[i][j] == 'O')
            {
                cnt++;
                score += cnt;
            }
            else
                cnt = 0;
        }
        printf("%d\n", score);
    }
    return 0;
}