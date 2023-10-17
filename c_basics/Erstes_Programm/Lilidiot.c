#include <stdio.h>

#define eingabelaenge 20

void	idiot(char *name);

int	main()
{
	char	jemand[eingabelaenge];
	printf("Name eines Ihnen bekannten Idioten: ");
	fgets(jemand, eingabelaenge, stdin);
	idiot(jemand);
}

void	idiot(char *name)
{
	int i;
	for(i = 0; i < 3; i++);
	printf("%s ist ein wahrer Idiot\n", name);
}
