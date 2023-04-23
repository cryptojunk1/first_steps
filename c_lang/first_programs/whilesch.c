#include <stdio.h>
  
int     main()  {
            int a = 5;
            int b = 1;
			
			while(a >= 0)	{   //kann auch mit && || kombiniert werden
					while(b < 3)	{
							printf("b ist zu klein\n");
							b++;
					}
					printf("A = %d\n", a);
					a--;
			}      
	      return 0;
}
