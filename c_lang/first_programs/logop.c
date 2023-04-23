#include <stdio.h>

// Logische Operatoren


int		main()	{
		int a = 0;
		int b = 1;

		if(b == 1 && a == 1)	{  // UND
				printf("Everything is the same\n");
				printf("a:%d" , a);
				printf(" b:%d\n" , b);
			}		
		else if(b <= 0 || a >= 0)	{  // ODER 
				printf("True\n");
			}	

		return 0;
}
