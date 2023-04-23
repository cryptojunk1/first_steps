#include <stdio.h>
#include <unistd.h>

void	hardcore(char c)	{	
			write(1, &c, 1);
}

int		main(void)	{
			hardcore('T');
			printf("\n");			
		return 0;
}
