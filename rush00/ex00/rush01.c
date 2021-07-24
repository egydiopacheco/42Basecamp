void	ft_putchar(char c);

void	draw_top_base(int horizontal, char param1, char param2)
{
	if (horizontal > 0)
	{
		ft_putchar(param1);
		while (horizontal > 0)
		{
			ft_putchar('*');
			horizontal--;
		}
		ft_putchar(param2);
		ft_putchar('\n');
	}
	else
	{
		if (horizontal == -1)
		{
			ft_putchar(param1);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(param1);
			ft_putchar(param2);
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
		ft_putchar('*');
		while (counter_x > 0)
		{
			ft_putchar(' ');
			counter_x--;
		}
		if (horizontal >= 0)
			ft_putchar('*');
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
	char	param1;
	char	param2;

	param1 = '/';
	param2 = '\\';
	is_valid = verify(x, y);
	if (y > 2)
		vertical = y - 2;
	else
		vertical = 0;
	if (is_valid == 1)
		return ;
	horizontal = x - 2;
	if (y >= 2)
	{
		draw_top_base(horizontal, param1, param2);
		draw_middle(horizontal, vertical);
		draw_top_base(horizontal, param2, param1);
	}
	else
		draw_top_base(horizontal, param1, param2);
}
