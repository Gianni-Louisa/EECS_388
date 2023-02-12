#include <stdio.h>
//Gianni Louisa
//This is a basic calculator which takes input of a mode for the calcuator then 2 numbers and outputs the corresponding answer.

int main() {
//#1
 char operatorr;//intizizes opertatorr variable as a character
  float first, second;//initizalized using float to make sure when we divide it wont error out because of decimal points, and give us correct answer
  printf("Enter an operator (+, -, *, /): ");//Prints the operators for the client
  scanf("%c", &operatorr);//Gets the input from client and sets it to the operatorr variable
  printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);//Gets the input of 2 numbers which are float type

  switch (operatorr) {//using a switch to determine which action should be done based on operator
    case '+'://if its adding
      printf("%.1f + %.1f = %.1f \n", first, second, first + second);//Adds the first and second numbers together to 1 decimal point
      break;//Breaks the current loop case
    case '-'://if subtracting
      printf("%.1f - %.1f = %.1f \n", first, second, first - second);//Subtracts the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '*'://If multiplying
      printf("%.1f * %.1f = %.1f \n", first, second, first * second);//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '/'://If dividing
      printf("%.1f / %.1f = %.11f \n", first, second, first / second);//Divides the first and second variable together to 11 decimal points. I wanted more accuracy when dividing.
      break;//Breaks the current loop case
    // operator doesn't match any case constant
    default://If nothing else "catches" will default to this
      printf("Error! operator is not correct");//Error messege to print if incorrect operator was given
  }
  return 0;
}