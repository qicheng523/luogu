#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 10;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += i;
    }
    printf("%d\n", count);
    return 0;
}