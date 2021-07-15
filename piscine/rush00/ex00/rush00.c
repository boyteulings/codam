void	ft_putchar(char c);

void	pipespace(x, y)
{
	int	height;
	int	width;

	if (height == 0)
		ft_putchar('|');
	else if (height == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
	height++;
	width = 0;
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (width < y)
	{
		while (height < x)
		{
			if (width == 0 | width == y - 1 )
			{
				if (height == 0 | height == x - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
				pipespace(x, y);
			height++;
		}
		width++;
		height = 0;
		ft_putchar('\n');
	}
}
