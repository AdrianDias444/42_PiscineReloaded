int ft_iterative_factorial(int nb)
{
    int fatorial;

    if (nb < 0)
        return (0);

    if (nb == 0)
        return (1);

    fatorial = nb;
    while (nb > 1)
    {
        nb--;
        fatorial = fatorial * nb;
    }
    return (fatorial);
}
