#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}


char *ft_strdup(char *src)
{
    char *dest;
    int c;
    int i;

    i = 0;
    c = ft_strlen(src);
    dest = malloc(sizeof(char) * (c + 1));


    if(!dest)
        return(NULL);


    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    
    return (dest);
}
