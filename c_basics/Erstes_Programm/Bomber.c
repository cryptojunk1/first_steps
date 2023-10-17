#include <stdio.h>

void	dropBomb(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("\nWiiiii...");
	}
}

int	main()
{
	char x;

	printf("Taste druecken, um die Bomben zu werfen!");
	x = getchar();
	dropBomb();
	printf("\n\nBOOM\n");
	printf("Die Taste %c hat die Explosion ausgelöst!\n", x);
}
