#include <unistd.h>
#include <stdio.h>

int		main()
{
		int schuharray[5] = {2,4,6,8,10};
		int x;

		for(x = 0; x < 5; x++)
		{
			printf("Index = %d, Inhalt = %d\n", x, schuharray[x]);
		}
		printf("Das ist ein Array\n");
		return 0;
}
