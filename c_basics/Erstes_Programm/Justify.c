#include <stdio.h>

/*
* Formatierung mit printf.. rechts und linksbündig ausgeben
* 15 Zeichen nach rechts und darunter 15 zeichen nach links
*/

int	main()
{
	printf("%15s", "rechts\n");
	printf("%-15s", "links\n");

	return (0);
}