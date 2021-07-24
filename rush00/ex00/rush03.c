void	ft_putchar(char c);

void	draw_top_base(int horizontal)
{
	if (horizontal > 0)
	{
		ft_putchar('A');
		while (horizontal > 0)
		{
			ft_putchar('B');
			horizontal--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{
		if (horizontal == -1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('A');
			ft_putchar('C');
			ft_putchar('\n');
		}
	}
}

void	draw_middle(int horizontal, int vertical)
{
	int		counter_x;

	counter_x = horizontal;
	while (vertical > 0)
	{
		ft_putchar('B');
		while (counter_x > 0)
		{
			ft_putchar(' ');
			counter_x--;
		}
		if (horizontal >= 0)
			ft_putchar('B');
		ft_putchar('\n');
		counter_x = horizontal;
		vertical--;
	}
}

int	verify(int x, int y)
{
	int	is_valid;

	is_valid = 0;
	if ((x <= 0 || y <= 0))
		is_valid = 1;
	return (is_valid);
}

void	rush(int x, int y)
{
	int		is_valid;
	int		horizontal;
	int		vertical;

	is_valid = verify(x, y);
	if (is_valid == 1)
		return ;
	if (y > 2)
		vertical = y - 2;
	else
		vertical = 0;
	horizontal = x - 2;
	if (y >= 2)
	{
		draw_top_base(horizontal);
		draw_middle(horizontal, vertical);
		draw_top_base(horizontal);
	}
	else
		draw_top_base(horizontal);
}
