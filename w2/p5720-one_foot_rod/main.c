#include <stdio.h>

int main(void)
{
    int length;
    if(scanf("%d", &length) != 1)
    {
        return 1;
    }
    int count = 1;
    int judge = 1;
    while (judge)
    {
        if (length == 1)
        {
            judge = 0;
            break;
        }
        length /= 2;
        count++;
    }
    printf("%d\n", count);
    return 0;
}