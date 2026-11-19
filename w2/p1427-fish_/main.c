#include <stdio.h>

int main(void)
{
    unsigned int arr[100];
    int i = 0;
    int j = -1;
    do
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            return 1;
        }
        i++;
        j++;
    } while (arr[j] != 0);
    
    for (int i = j - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
        if (i > 0)
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