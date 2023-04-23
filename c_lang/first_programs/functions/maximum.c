#include <stdio.h>



int	maximus(int x, int y)	{
		if(x > y)	{
			return x;
		}
		else if(x < y)	{
			return y;
		}
		else	{
			printf("Both are equal");
		}
}
int		main()	{
			int a, b;
			printf("Gib beide Zahlen ein:");
			scanf("%d %d", &a, &b);
			int ergebnis = maximus(a, b);
			printf("Die größere Zahl lautet: %d\n", ergebnis);
		return 0;
}
