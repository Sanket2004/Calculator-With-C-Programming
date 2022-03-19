// write a programme to create a calculator using switch case //
// Sanket Banerjee//

#include <stdio.h>

int main()
{

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter First Value: ");
  scanf("%lf", &first);
  printf("Enter Second Value: ");
  scanf("%lf", &second);

  switch (op)
  {
  case '+':
    printf("%.10lf + %.10lf = %.10lf", first, second, first + second);
    break;
  case '-':
    printf("%.10lf - %.10lf = %.10lf", first, second, first - second);
    break;
  case '*':
    printf("%.10lf * %.10lf = %.10lf", first, second, first * second);
    break;
  case '/':
    printf("%.10lf / %.10lf = %.10lf", first, second, first / second);
    break;

  default:
    printf("Error! operator is not correct");
  }

  return 0;
}
