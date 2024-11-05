#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int length, len = 0;
    scanf("%d", &length);
    getchar();

    char* txt = (char*)malloc(sizeof(char) * (length + 1));

    fgets(txt, length + 1, stdin);

    txt[strcspn(txt, "\n")] = 0;
    len = strlen(txt);

    for (int i = len + 1; i > 0; i--)
    {
        if (txt[i] == ' ')
        {
            txt[i] = 0;
            printf("%s ", &txt[i + 1]);
        }
    }
    printf("%s", txt);

    free(txt);
    return 0;
}

// 문자열의 최대길이 입력받기
// 길이 만큼 메모리공간을 동적으로 할당후, 입력
// 이 모든 것들 후에 문자열의 단어를 역으로 출력.