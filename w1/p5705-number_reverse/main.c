#include <stdio.h>

int main(void)
{
    float number = 0;
    if (scanf("%f", &number) != 1)
    {
        return 1;
    }
    int num = 0;
    num = (int)(number * 10);
    int numbers[4];
    int i = 0;
    while (num > 0)
    {
        numbers[i] = num % 10;
        num /= 10;
        i++;
    }
    float ret = 0;
    for (int k = 0; k < 4; k++)
    {
        num = numbers[k];
        ret += num;
        ret *= 10;
    }
    ret /= 10000;
    printf("%.03f\n", ret);
    return 0;
}