#include <unistd.h>

void    ft_putchar(char c, int n)
{
    int i = 0;

    while (i <= n)
    {
        write(1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                ft_putchar(av[1][i], av[1][i] - 'a');
                i++;
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                ft_putchar(av[1][i], av[1][i] - 'A');
                i++;
            }
            else
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}