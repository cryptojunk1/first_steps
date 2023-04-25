#include <stdio.h>

int main() {
double weight;
int x;

printf("Please enter your weight:");
scanf("%lf", &weight);

printf("\nI have some Information for the following planets:\n\n");
printf("\t1. Mercury\t2. Venus\t3 Mars\t4. Jupiter\n");
printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

printf("Which planet are you visiting?");
scanf("\n%d", &x);
if(x == 1)
{
  weight *= 0.38;
}
else if(x == 2)
{
  weight *= 0.91;
}
else if(x == 3)
{
  weight *= 0.38;
}
else if(x == 4)
{
  weight *= 2.34;
}
else if(x == 5)
{
  weight *= 1.06;
}
else if(x == 6)
{
  weight *= 0.92;
}
else if(x == 7)
{
  weight *= 1.19;
}
printf("\nYour weight: %lf\n", weight);

}
