#include <unistd.h>
#include <stdio.h>

int 	main()
{
		int array[10];
		int x;
		int y = 0;

		do
		{
		printf("Gib eine Zahl ein: ");
		scanf("%d", &x);
		array[y] = x;
		y++;
		
		printfintf("%d von 10 zahlen eingegeben\n", y);
		}

		for(x = 0; x < 10; x++)
		{
			printf("Zahl Nr. %d = %d\n", x, array[x]);
		}
		printf("Dies ist unser Array!\n");

		return 0;
}
