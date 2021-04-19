#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c\n%s\n%99[^\n]", &ch, &s, &sen);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}