#include <stdio.h>


int main(void)
{
    int number = 0;
    if (scanf("%d", &number) != 1)
    {
        return 1;
    }
    int judge = 1;
    int ret = 0;
    int arr[200];
    int i = 0;
    while (judge)
    {
        arr[i] = number;
        if (number == 1)
        {
            judge = 0;
            break;
        }
        ret = number % 2;
        if (ret == 1)
        {
            number = number * 3 + 1;
        }
        else 
        {
            number /= 2;
        }
        i++;
    }
    for (int j = i; j >= 0; j--)
    {
        printf("%d", arr[j]);
        if (j > 0)
        {
            printf(" ");
        }
        else 
        {
            printf("\n");
        }
    }
    return 0;
}