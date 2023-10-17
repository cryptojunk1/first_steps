#include <stdio.h>
void	idiot(int repeat, char c);

int		main()
{
	printf("Er ruft mich staendig an, hat nie was zu sagen \n");
	printf("Und das jeden Tag - wie kann er es wagen?\n");
	idiot(1, '?');
	printf("Er beleidigt meine Frau und meine Familie\n");
	printf("Sein Hund pinkelt mir staendig in die Petersilie \n");
	idiot(2, '?');
	printf("Er findet das witzig, haelt sich den Bauch vor Lachen \n");
	printf("Wenn ich ihn mal erwische, gibt´s ein paar auf die Backen.\n");
	idiot(3, '!');
	return (0);
}

/*idiot funktion*/

void	idiot(int repeat, char c)
{
	int i;
	for(i = 0; i < repeat; i++)
	printf("Bill ist ein Idiot%c\n", c);
}
