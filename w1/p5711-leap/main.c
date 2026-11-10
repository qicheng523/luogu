// Input:
// A positive integer represents the year;
// Output:
// 1 (If the year outputing is leap year)
// 0 (If the year outputing is common year)
// State to maintain:
// No steps are repeated(there is no need to retain information between steps)
// Loop boundaries:
// No loop(it simply checks if the input number is a leap year)
#include <stdio.h>

int main(void)
{
    int year = 0;
    scanf("%d", &year);
    int ret = 0;

    if (year % 4 == 0 && year % 100 != 0)
    {
        ret = 1;
    }
    else if (year % 400 == 0)
    {
        ret = 1;
    }
    
    printf("%d\n", ret);

    return 0;
}