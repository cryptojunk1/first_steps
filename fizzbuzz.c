#include <stdio.h>

int main()
{
int i;

for(i = 1; i <= 100; i++)
  {
    if (i % 15 == 0)
    {
      printf("FizzBuzz\n");
      continue;
    }
    else if (i % 5 == 0)
        {
      printf("Buzz\n");
      continue;
    }
    else if (i % 3 == 0) {

      printf("Fizz\n");
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}
