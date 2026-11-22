#include <stdio.h>

int main(void)
{
    int l, m;
    if (scanf("%d %d", &l, &m) != 2)
    {
        return 10;
    }
    int arr[l + 1];
    for (int j = 0; j <= l; j++)
    {
        arr[j] = 1;
    }
    int number[m * 2];
    for (int i = 0; i < m * 2; i++)
    {
        if(scanf("%d", &number[i]) != 1)
        {
            return 10;
        }
    }
    int count = 0;
    for (int i = 0; i < m * 2; i += 2) 
    {
        for (int j = number[i], k = number[i + 1]; j <= k; j++)
        {
            arr[j] = 0;
        }
        
    }
    for (int i = 0; i <= l; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    printf("%d", l + 1 - count);
    return 0;                    
}
