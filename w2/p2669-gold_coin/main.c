#include <stdio.h>

int main(void)
{
    int day = 0;
    if (scanf("%d", &day) != 1)
    {
        return 10;
    }
    int count = 0;
    int days = 0;
    while (days < day)
    {
        for (int i = 1; ;i++)
        {
            for (int j = 0; j < i; j++)
            {
                count += i;
                days++;
                if (days == day)
                {
                    break;
                }
            }
            if (days == day)
                {
                    break;
                }
        }
    }
    printf("%d\n", count);
    return 0;
}