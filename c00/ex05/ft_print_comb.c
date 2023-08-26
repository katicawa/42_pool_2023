#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
	
void	ft_print_comb(void)
{
	int	n;
	int	hundreds;
	int	tens;
	int	units;

	n = 0;
	while (n < 790)
	{
		units = n / 100;
		tens = (n / 10) % 10;
		hundreds = n % 10;
		if (units < tens && tens < hundreds)
		{
			ft_putchar(units + '0');
			ft_putchar(tens + '0');
			ft_putchar(hundreds + '0');
			if (n!= 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n++;
	}
}
