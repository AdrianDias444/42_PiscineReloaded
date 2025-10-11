#include "ft_abs.h"
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int res;
    int isNegative = 0;

    i = 0;
    res = 0;

    while(str[i] == ' ')
        i++;
    if(str[i] == '-')
    {
        isNegative = 1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    if(isNegative == 1)
        res = res *-1;

    return(res);
}

int main(int argc, char **argv)
{
    int i;

    i = 1;

    while(argc > i)
    {
        int c;

        c = ft_atoi(argv[i]);

        printf("ABS(%d) = %d\n", c,ABS(c));
        i++;
    }
}















