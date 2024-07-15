#include <stdio.h>
#define SUCCESS 0
#define ERROR 1
int main(void)
{
  int number = 20;
  int guess = 0;

  printf("GUESSING GAME\n");

  while(number != guess) 
  {
    printf("GUESS!");
    scanf("%d", &guess);

    if (guess > number) {
      printf("TOO HIGH");
    } else if (guess < number) {
      printf("TOO LOW");
    } else {
      break;
    }
  }
  if (SUCCESS == 0) {
    printf("THANKS FOR PLAYING!\n");
    return SUCCESS;
  } else {
    printf("ERROR!!!\n");
    return ERROR;
  }
}

