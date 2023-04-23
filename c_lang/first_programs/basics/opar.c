#include <stdio.h>

int		main()	{
		int a = 3;
		int b = 6;
		int c;
		printf("Das ist Modulu: %d\n" , a%b); //Modulu ist teilen mit Rest

		a++;	//macht 1 plus
		b--; //macht 1 weniger	
		printf("a ist aber nun %d\n" , a);
		c = a + b;
				printf("c=%d\n" , c);
				printf("a=%d\n" , a);
				printf("b=%d\n" , b);
		if(c >= 5)	{
				printf("%d ist größer 5! Mach mal langsam!\n", c);
		}
		else if(c < 5)	{
				printf("%d ist kleiner als 5!\n" , c);
		}
		return 0;
}
