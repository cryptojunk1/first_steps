#include <stdio.h>

int funky(void);
int funktion2(void);

int funky()	{
			printf("Funktion\n");
			funktion2();
}

int funktion2()	{
			printf("Funktion2\n");
}

int main()	{
		funky();
		printf("Main\n");
		return 0;
}
