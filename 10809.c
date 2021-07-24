#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int main()
{
    char s[101];
    int re[25];
    
    for (int i = 0; i < 25; i++)
    {
        re[i] = -1;
    }
    int cnt = 0;
    
    scanf("%s", s);
    for (int j = 'a'; j <= 'z'; j++)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == j)
            {
                re[j - 97] = i;
                break;
            }
        }
    }

    for (int k = 0; k < 25; k++)
    {
        printf("%d ", re[k]);
    }
    
    return 0;
}
