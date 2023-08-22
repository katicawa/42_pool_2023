#include <unistd.h>

void	ft_print_nubers(void)
{
	char	n;

	n = '0';
	while (n >= '0' && n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
}
