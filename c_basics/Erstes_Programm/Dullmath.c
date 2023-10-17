#include <stdio.h>

void	hier(void);
void	dort(void);

int	main()
{
	hier();
	dort();
}

void	hier(void)
{
	int	t;
	t = 1 * 5;
	printf("Das ist der Wert von v in 'hier': %i\n", t);
}

void	dort(void)
{
	int	t;
	t += 5;
	printf("Das ist der Wert von v in 'dort': %i\n", t);
}
