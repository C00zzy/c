#include <stdio.h>
#define SUCCESS 0
#define FAILURE 1

int fuzzbuzz()
{
  for (int i = 1; i <= 100; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("%d: FIZZBUZZ\n", i);
    } else if (i % 3 == 0) {
      printf("%d: BUZZ\n", i);
    } else if (i % 5 == 0) {
      printf("%d: FIZZ\n", i);
    } else {
      printf("%d\n", i);
    }
  }
}
int main(void)
{

  fuzzbuzz();

  if (SUCCESS == 0)
  {
    printf("Program ran successfully\n");
  } else {
    printf("FAILURE");
  }
}
