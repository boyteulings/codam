void	ft_swap(int	*a, int	*b);
{	
	int	*temp_a;

	*temp_a = *a;
	*a = *b;
	*b = temp_a;
}
