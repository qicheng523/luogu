#include <stdio.h>


int main(void)
{
    int t = 0, ji = 0;
    if (scanf("%d %d", &t, &ji) != 2)
    {
        return 1;
    }
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    int space = 0;
    for (int j = 0; j < t; j++)
    {
        space = j;
        if (space != arr[j])
        {
            break;
        }
    }
    int arr_s[t];
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        arr_s[i] = 0;
    }
    for (int k = 0; k < t; k++)
    {
        if (arr[k] % ji == space)
        {
            arr_s[i] = k;
            count;
        }
    }
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr_s[i] >= max)
    }
}