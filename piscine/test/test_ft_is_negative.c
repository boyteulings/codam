#include <unistd.h>

int	main(void)
{
	int	n;

	n = -5;
/* remove everything above (and including) this comment!*/
	void	ft_is_negative(int n);

	if (n >= 0)
		write(1, "P\n", 2);
	else if (n < 0)
		write(1, "N\n", 2);
}
