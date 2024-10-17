#include <stdio.h>

int main(void)
{
    // 문제 1
    FILE *fp;
    fp = fopen("mystory.txt", "w");
    
    fputs("#이름: 윤성우\n", fp);
    fputs("#주민번호: 900208-1012589\n", fp);
    fputs("#전화번호: 010-1111-2222\n", fp);

    // 문제 2
    fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);
    fputs("#취미: 축구\n", fp);
    fclose(fp);

    // 문제 3
    fp = fopen("mystory.txt", "r");

    char fl[100];
    while (fgets(fl, sizeof(fl), fp) != NULL)
    {
        printf("%s", fl);
    }

    fclose(fp);
    return 0;
}
