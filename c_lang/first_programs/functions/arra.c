#include <stdio.h>

int a = 5;		// Das ist eine globale Variable mit const wird sie konstant

int		main()	{
			int a[10];		//Das ist ein Array von 10

			int i;			//Für eine for schleife muss i (Zählfaktor) definiert werden
			for(i = 0; i < 10; i++)	{
				a[i] = 42;   //Statt '42' könnte auch eine funktion stehen
				if(i == 5) {
						a[i] = 420;
				}
			}
			a[6] = 420;

			for(i = 0; i < 10; i++) {
					printf("%d, ", a[i]);
			}
			printf("\n");
		return 0;
}
