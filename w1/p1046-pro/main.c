#include <stdio.h>

#define APPLE_NUMBER 10
#define CHAIR_HEIGHT 30

int main (void)
{
        int arr[APPLE_NUMBER] = {0};
        int taotao_touch = 0;
        for (int j = 0; j < APPLE_NUMBER; j++)
        {
                scanf("%d", &arr[j]);
        }
        scanf("%d", &taotao_touch);
        int reach = taotao_touch + CHAIR_HEIGHT;
        int count = 0;
        for (int i = 0; i < APPLE_NUMBER; i++)
        {
                if (arr[i] <= reach)
                {
                        count++;
                }
        }
        printf("%d\n", count);
        return 0;
}