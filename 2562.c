#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, max = 0;
    int row = 0;
    int num[9] = { 0, };

    for (int i = 0; i < sizeof(num)/ sizeof(int) ; i++) 
    {
        scanf("%d", &num[i]);

            if (num[i] > max)
            {
                max = num[i];
                row = i + 1;
            }
    }
    printf("%d\n%d", max, row);
    return 0;
}
