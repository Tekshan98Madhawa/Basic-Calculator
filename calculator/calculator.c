#include <stdio.h>

int main() {
   char operator;
   double num1, num2, result;

   printf("Enter an operator (+, -, *, /): ");
   scanf("%c", &operator);

   printf("Enter two operands: ");
   scanf("%lf %lf", &num1, &num2);

   switch(operator) {
      case '+':
         result = num1 + num2;
         break;

      case '-':
         result = num1 - num2;
         break;

      case '*':
         result = num1 * num2;
         break;

      case '/':
         result = num1 / num2;
         break;

      default:
         printf("Error: Invalid operator!");
         return 1;
   }

   printf("Result: %lf %c %lf = %lf", num1, operator, num2, result);

   return 0;
}
