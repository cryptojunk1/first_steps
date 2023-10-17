/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guessme.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:25:28 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 13:43:59 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Ratebereich */
const int   range = 100;
/* Anzahl Versuche */
const int   tries = 6;

int     rnd(int range);
void	seedrnd(void);

int main()
{
    int guessme;
    int guess;
    int t;
    const int eingabelaenge = 10;
    char    eingabe[eingabelaenge];

    seedrnd();              // Startseed für Zufallszahlen erstellen
    guessme = rnd(range);   // Diese Zahl erraten!

    printf("RATE!?!\nRate die Zufallszahl:\n");
    printf("Ich denke an eine Zahl zwischen 1 und %i\n", range);
    printf("Du hast %i Versuche!", tries);

    /* geben wir also Versuche */
    for(t = 1; t <= tries; t++)
    {
        printf("\nVersuch #%i: ", t);
        //Rateversuch holen
        fgets(eingabe, eingabelaenge, stdin);
        guess = atoi(eingabe);

        if (guess == guessme) //richitig geraten
        {
            printf("Du hast richitg geraten!! TOLL!!\n");
            break;
        }
        else if (guess < guessme)
        {
            printf("Zu niedrig!\n");
        }
        else
            printf("Zu hoch!\n");
    }
    printf("Die Zahl lautete: '%i'\n", guessme);
    return (0);
}

int rnd(int upper)
{
    int r;

    r = rand()%upper + 1;
    return (r);
}

void    seedrnd(void)
{
    srand((unsigned)time(NULL));
}