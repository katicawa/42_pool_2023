#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b, char c, char d)
{
	if (((a == c) && (b < d)) || (a < c))
	{
		ft_putchar(a + 48);
		ft_putchar(b + 48);
		ft_putchar(32);
		ft_putchar(c + 48);
		ft_putchar(d + 48);
		if (!(a == 9 && b == 8 && c == a && d == c))
		{
			ft_putchar(44);
			ft_putchar(32);
		}
	}
}

void	ft_print_comb2(void)
{
	int		n;
	char	a;
	char	b;
	char	c;
	char	d;

	n = 0;
	while (n < 10000)
	{
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n % 10;
		print(a, b, c, d);
		n++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
