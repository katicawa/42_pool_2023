#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (size > 0 && i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

void	print_array(int array[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}

int	main(void)
{
	int	array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
	int	size = sizeof(array)/sizeof(array[0]);

	ft_sort_int_tab(array, size);
	print_array(array, size);
}
