#include <stdio.h>

int main(void){
  char opr;
  int num1, num2;
  double result;
  printf("What is your operator: \n");
  scanf(" %c", &opr);

  printf("What is your First number: \n");
  scanf("%d", &num1);

  printf("What is your Second number: \n");
  scanf("%d", &num2);

  printf("your operator is %c\n", opr);
  printf("your first number is %d\n",num1);
  printf("Your second number is %d\n", num2);

  if (opr == '+') {
    result = num1 + num2;
  } else if (opr == '-') {
    result = num1 - num2;
  } else if (opr == '*') {
    result = num1 * num2;
  } else if (opr == '/') {
    if (num2 != 0) {
      result = (double) num1 / num2;
    } else {
      printf("ERROR");
      return 1;
    }
  } else {
    printf("ERROR NO OPERATOR\n");
    return 1;
  }
  printf("Result of %d %c %d = %.2f\n", num1, opr, num2, result);
  return 0;
}
