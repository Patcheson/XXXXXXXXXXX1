#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_disp(char *str)
{
	int i;
	char buf;

	while (read(0, &buf,1) != 0)
		i++;
	printf("%i\n", i);
	ft_putstr(&buf);
}

int main(int ac, char **av)
{
	ft_disp(av[1]);

}
