#include <stdio.h>

#define TRASH 10 // 10 minutes
#define SCHOOL 8 // 8:00 a.m

int main(void)
{
    int s, v;
    scanf("%d %d", &s, &v);
    int minutes = 0;
    minutes = (s + v + 1) / v;
    int start = 0;
    if (minutes + TRASH >= SCHOOL * 60)
    {
        start = SCHOOL - minutes - TRASH;
    }
}