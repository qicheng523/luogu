#include <stdio.h>

#define ISBN_NUMBER 13
#define NUMBER 10

int main(void)
{
    char words[ISBN_NUMBER];
    for (int i = 0; i < ISBN_NUMBER; i++)
    {
        if(scanf("%c", &words[i]) != 1)
        {
            return 1;
        }
    }
    char number[NUMBER];
    int k = 0;
    for (int j = 0; j < ISBN_NUMBER; j++)
    {
        if ((words[j] < '0' || words[j] > '9') && (words[j] != 'X'))
        {
            j++;
        }
        
        number[k] = words[j];
        k++;
        
    }
    int count = 0;
    for (int i = 0; i < (NUMBER - 1); i++)
    {
        count += (number[i] - '0') * (i + 1);
    }
    int ret = 0;
    ret = count % 11;
    if (ret == 10)
    {
        ret = 40;
    }
    if (ret == (number[NUMBER - 1] - '0'))
    {
        printf("Right\n");
    }
    else
    {
        words[ISBN_NUMBER - 1] = ret + '0';
        if (ret == 10)
        {
            words[ISBN_NUMBER - 1] = 'X';
        }
        for (int j = 0; j < ISBN_NUMBER; j++)
        {
            printf("%c", words[j]);
            if (j == ISBN_NUMBER - 1)
            printf(" \n");
        }
    }
    return 0;
}