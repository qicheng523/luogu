#include <stdio.h>

#define NUMBER 3

int main(void)
{
    int numbers[NUMBER];
    for (int i = 0; i < NUMBER; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            return 1;
        }
    }    
    int ret = 0;
    int judge = 1;
    while (judge == 1)
    {
        for (int i = 0; i < (NUMBER - 1); i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                ret = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = ret;
            }
        }
        for (int j = 0; j < (NUMBER - 1); j++)
        {
            if (numbers[j] <= numbers[j + 1])
            {
                judge = 0;
            }
            else
            {
                judge = 1;
                break;
            }
        }
    }
    for (int k = 0; k < NUMBER; k++)
    {
        if (k < (NUMBER - 1))
        {
            printf("%d ", numbers[k]);
        }
        else
        {
            printf("%d\n", numbers[k]);
        }
    }
}