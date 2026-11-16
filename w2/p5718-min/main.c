#include <stdio.h>

int main(void)
{
    int number;
    if (scanf("%d", &number) != 1)
    {
        return 1;
    } 
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            return 1;
        }
    }
    int min = arr[0];
    for (int j = 0; j < number; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
    }
    printf("%d\n", min);
    return 0;
}