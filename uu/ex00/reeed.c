#include <unistd.h>
#include <stdlib.h>
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

int	ft_count_x(char *buf)
{
	int i = 0;
	while (buf[i] != '\n')
		i++;
	return (i);
}


char	*ft_disp(char *str)
{
	int i = 0;
	int c;
	char *buf;

	buf = (char *)malloc(sizeof(char) * i + 1);
	while (read(0, &c, 1) != 0)
		buf[i++] = c;
	return (buf);
}

int main(int ac, char **av)
{
	char *buff = ft_disp(av[1]);
	ft_putstr(buff);
	int x = ft_count_x(buff);
	printf("X: %i\n", x);
}
