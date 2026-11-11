// P1425 Fish Swimming Time
// in : a b c d  -- swims from a:b to c:d on the same day (24-hour clock)
// out: e f       -- e hours and f minutes, 0 <= f < 60
// idea: convert both times to minutes, subtract, then split with /60 and %60

#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int total_minutes = (c * 60 +d) - (a * 60 + b);
    int e, f;
    e = total_minutes / 60;
    f = total_minutes % 60;
    printf("%d %d\n", e, f);
    return 0;
}