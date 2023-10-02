#include <stdio.h>
#include <unistd.h>

int		main()
{
	char *hutmacher = "Kein Platz!";
	char alice[30] = "Hier ist genug Platz frei!";
	
	hutmacher = "Hier ist ein Platz";
	
	
	printf("%s\n", hutmacher);
	return 0;

}

