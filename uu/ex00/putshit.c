#include <unistd.h>

void	ft_putshit(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	ft_putshit(av[1]);
}
