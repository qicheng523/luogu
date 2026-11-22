#include <stdio.h>

int main (void)
{
    int n , k;
    if (scanf("%d %d", &n, &k) != 2)
    {
        return 10;
    }
    int sort_a = -1, sort_b = -1;
    int arr_a[n], arr_b[n];
    for (int i = 2; i < n; i++)
    {
        if (i % k ==0)
        {
            sort_a++;
            arr_a[sort_a] = i;
        }
        else
        {
            sort_b++;
            arr_b[sort_b] = i;
        }
    }
    float aver_a = 0, aver_b  = 0;
    for (int i = 0; i < sort_a; i++)
    {
        aver_a += arr_a[i];
    }
    for (int i = 0; i < sort_b; i++)
    {
        aver_b += arr_b[i];
    }
    printf("%.01f %.01f\n", aver_a / sort_a, aver_b / sort_b );
    return 0;
}