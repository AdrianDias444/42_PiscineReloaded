#include <stdlib.h>


int *ft_range(int min, int max)
{
    int *dest;
    int i;
    int c;
    
    if(min >= max)
    {
        dest = NULL;
        return (dest);
    }
    dest = malloc(sizeof(int) * (max - min));

    if(!dest)
        return (NULL);

    i = 0;
    c = min;

    while(c < max)
    {
        dest[i] = c;
        c++;
        i++;
    }
    return (dest);
}
