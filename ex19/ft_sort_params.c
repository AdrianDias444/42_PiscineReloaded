#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_params(int argc, char **argv)
{
    int c;
    int j;

    c = 1;

    while (c < argc)
    {
        j = 0;
        while (argv[c][j])
        {
            ft_putchar(argv[c][j]);
            j++;
        }
        ft_putchar('\n');
        c++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char *temp;

    i = 1;
    j = 0;

    if(argc > 1)
    {
        while (i < argc - 1)
        {
            j = 0;
            while (argv[i][j] == argv[i + 1][j] && argv[i][j] && argv[i + 1][j])
                j++;
            if (argv[i][j] > argv[i + 1][j])
            {
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
                i = 0;
            }
            i++;
        }
        ft_print_params(argc, argv);
    }

    return (0);
}
