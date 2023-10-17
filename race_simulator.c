/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   race_simulator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:09:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/17 10:10:21 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures
struct Race 
{
  int numberOfLaps, currentLap;
  char *firstPlaceDriverName;
  char *firstPlaceRaceCarColor;
};

struct RaceCar
{
  char *driverName;
  char *raceCarColor;
  int totalLapTime;
};

// Print functions section
void printIntro()
{
  printf("Willkommen zum heutigen Main-Event lieber Rennfan!\n");
}

void printCountDown()
{
  int i;

  i = 5;
  printf("Racers Ready! In...\n");
  while (i > 0)
  {
    printf("%d\n", i);
    i--;
  }
  printf("Race!!\n");
}

void printFirstPlaceAfterLap(struct Race race)
{
  printf("After lap number %i\nFirst Place Is: %s in the %s race car!\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void  printCongratulation(struct Race race)
{
  printf("Let's all congratulate %s im %s Rennauto für seine Hervorragende Leistung\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
  printf("Es war ein herrausragendes Rennen! Vielen Dank für Ihren Besuch!!\n");
}
// Logic functions section
int calculateTimeToCompleteLap()
{
  int speed, acceleration, nerves;
  speed = (rand() % 3) + 1;
  acceleration = (rand() % 3) + 1;
  nerves = (rand() % 3) + 1;
  return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar *raceCar)
{
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
  if(raceCar1->totalLapTime <= raceCar2->totalLapTime)
  {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  }
  else
  {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
 struct Race race = {
    .numberOfLaps = 15,
    .currentLap = 0,
    .firstPlaceDriverName = "",
    .firstPlaceRaceCarColor = ""
 };
  for (int i = 1; i < race.numberOfLaps; i++)
  {
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
    race.currentLap++;
  }
  printCongratulation(race);
}

int main() 
{
  srand(time(0));
  struct RaceCar raceCar1 = {"Rene", "blue", 0};
  struct RaceCar raceCar2 = {"Paul", "green", 0};
	
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
};
