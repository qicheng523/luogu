// P5707 be late for school
// in: s v--two positive integer represent distance and speed, separated by space in a single line
// out: HH:MM, represent hours and minutes, 
// exactly two digits, zero-padded on the left if needed
// idea: it cost 10 minutes to take out the trash, yyy may depart only at second 0 of each minutes

#include <stdio.h>

#define TIME 8 // time at 8:00
#define DAY 24 // 24 hours in a day
#define GARBAGE 10 // cost 10 minutes
#define MINUTES 1440 // minutes in a day

int main(void)
{
    int s, v;
    if (scanf("%d %d", &s, &v) != 2)
        return 1;
    int time = (s + v - 1) / v;
    int first_time = 0;
    if (GARBAGE + time > TIME * 60)
    {
        first_time = (TIME + DAY) * 60 - GARBAGE - time;
    }
    else
    {
        first_time = TIME * 60 - GARBAGE - time;
    }
    while (first_time < 0)
    {
        first_time += MINUTES;
    }
    int hours, minutes;
    hours = first_time / 60;
    minutes = first_time % 60;
    printf("%02d:%02d\n", hours, minutes);
    
    return 0;
}
