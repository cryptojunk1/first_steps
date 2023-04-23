#include <stdio.h>

int		main()	{
			char note;

	// Eine User Abfrage printf + scanf	
		printf("Welche Note hast du?");
		scanf("%c", &note);

	// Switch ist ähnlich zu If-Abfragen		
		switch(note)	{
		case 'A':
				printf("Sehr gut!\n");
				break; //damit nach einem true fall ende ist sonst springt es auf default
		case 'B':
				printf("Ganz gut!\n");
  	            break;
		case 'C':
				printf("Geht CCo!\n");
				break;
		case 'D':
				printf("Sehr gut!\n");
				break;
		case 'E':
				printf("Alter DUDE!\n");
				break;
		case 'F':
				printf("Absolutly NO HOPE! Go WASH CARS!!\n");
				break;
		default:    //wie "else"
			printf("Das ist keine Note also Cheat!\n");
		}

		return 0;
}
