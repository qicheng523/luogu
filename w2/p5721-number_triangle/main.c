#include <stdio.h>

int main(void)
{
    int side_length;
    if (scanf("%d", &side_length) != 1)
    {
        return 1;
    }
    int count = 1;

    for (int i = side_length; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%02d", count);
            count++;
            if (j == i - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}