#include <unistd.h>

void	write_number(int nbr)
{
	if (nbr > 9)
		write_number(nbr / 10);
		write(1, &"0123456789"[nbr % 10], 1);
}

int	main(void)
{
	int	nbr;

	nbr = 1;
	while(nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			write_number(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return (0);
}
