// write a programme to create a calculator using switch case //
//Sanket Banerjee//

#include <stdio.h>

int main() {

  char op;
  double first, second;
  float result;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter First Value: ");
  scanf("%lf", &first);
  printf("Enter Second Value: ");
  scanf("%lf", &second );

  switch (op) {
    case '+':
    result=first + second;
      printf("%.1lf + %.1lf = %.1lf", first, second, result );
      break;
    case '-':
    result=first - second;
      printf("%.1lf - %.1lf = %.1lf", first, second, result);
      break;
    case '*':
    result=first * second;
      printf("%.1lf * %.1lf = %.1lf", first, second,result );
      break;
    case '/':
    result= first / second;
      printf("%.1lf / %.1lf = %.1lf", first, second, result);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
