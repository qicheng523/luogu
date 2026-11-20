#include <stdio.h>

int isprime(int n);

int main(void)
{
    int number = 0;
    if (scanf("%d", &number) != 1)
    {
        return 0;
    }
    int arr[10000];
    int count = 0;
    int j = 2;
    int i = 0;
    do
    {
        if (isprime(j))
        {
            arr[i] = j;
            count += j;
            i++;
        }
        j++;
    } while (count <= number);

    for (int k = 0; k < i - 1; k++)
    {
        printf("%d\n", arr[k]);
    }    
    printf("%d\n", i - 1);
    return 0;
}

int isprime(int n)
{
    int i = 2;
    int judge;
    for (; i <= n; i++)
    {
        judge = 1;
        if (n % i == 0 && n / i > 1)
        {
            judge = 0;
            break;
        }
    }
    return judge;
}