#include <stdio.h>
int main(){
   char Operator;
   float num1, num2, result = 0;
   printf("Enter any one operator like +, -, *, / : ");
   scanf("%c", &Operator);
   printf("Enter the first value space the second value\n");
   scanf("%f%f", &num1, &num2);
   switch(Operator){
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("Invalid Operator ");
   }
   printf("The value = %f", result);
   return 0;
}
