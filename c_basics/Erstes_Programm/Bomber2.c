#include <stdio.h>

void	dropBomb(void);
int	score;

int	main()
{
	char	x;
	score = 0;
	
	for (;;)
	{
	printf("Taste ~ druecken, für Missionsende!\n");
	printf("Taste EINGABE druecken, um Bombe abzuwerfen!\n");
	x = getchar();
	if (x == '~')
	{
		break;
	}
	dropBomb();
	printf("Treffer bisher: %i\n", score);
	}
}

void	dropBomb()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("\nWIIII...");
	}
	printf("\nBOOOOM\n");
	score += 15;
}
