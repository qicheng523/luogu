// p5716 months_days
// in: y m -- year and month (1 <= m <=12)
// out: days in month m of year y
// idea: month-length table; February is 29 in leap years, 28 otherwise

#include <stdio.h>

#define MOUTHS 12

int main(void)
{
    int y, m;
    scanf("%d %d", &y, &m);
    int judge = 0;
    if (y % 4 == 0 && y % 100 != 0)
    {
        judge = 1;
    }
    else if (y % 400 == 0)
    {
        judge = 1;
    }
    int days[MOUTHS] = {31, 28, 31, 30, 31, 30,
                        31, 31, 30, 31, 30, 31};
    if (judge == 0)
    {
        printf("%d\n", days[m - 1]);
    }
    if (judge == 1)
    {
        if (m == 2)
        {
            days[1]++;
        }
        printf("%d\n", days[m - 1]);
    }
    return 0;
}