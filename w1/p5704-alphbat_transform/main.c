#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char a;
    if (scanf("%c", &a) != 1)
    {
        return 1;
    }
    if (islower(a))
    {
       printf("%c\n", toupper(a)); 
    }
    return 0;
}