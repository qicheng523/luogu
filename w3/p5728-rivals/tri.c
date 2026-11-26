#include <stdio.h>

int main(void)
{
    unsigned long long n, k;
    if (scanf("%lld %lld", &n, &k) != 2)
    {
        return 1;
    }
    unsigned long long arr[n];
    unsigned long long arr_w[n];
    for (unsigned long long i = 0; i < n; i++)
    {
        if (scanf("%lld", &arr[i]) != 1)
        {
            return 1;
        }
    }
    for (unsigned long long i = 0; i < n; i++)
    {
        if (scanf("%lld", &arr_w[i]) != 1)
        {
            return 1;
        }
    }
    unsigned long long count = 0;
    while (k > 0)
    {
        unsigned long long max = 0;
        for (unsigned long long j = 0; j < n; j++)
        {
            if (arr[j] >= max)
            {
                max = arr[j];
            }
        }   
        unsigned long long min = max;
        for (unsigned long long k = 0; k < n; k++)
        {
            if (arr[k] == max)
            {
                if (arr_w[k] <= min)
                {
                    min = arr_w[k];
                }   
            }
        }
        for (unsigned long long i = 0; i < n; i++)
        {
            if (arr[i] == max && arr_w[i] == min)
            {
                count += arr[i];
                arr[i] -= arr_w[i];
                k--;
            }
        }
    }
    printf("%lld\n", count);
    return 0;
}