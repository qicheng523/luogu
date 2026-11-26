#include <stdio.h>

int main(void)
{
    unsigned long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2)
    {
        return 1;
    }
    unsigned long long c = 0;
    c = 9 * 10 ^ 18;
    printf("%lld\n", c);
    return 0;
}