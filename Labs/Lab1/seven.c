#include <stdio.h>
#include <math.h>
//Gianni Louisa
//In this program we add to program 1 a few different features using the math.h library. 
int main() {
char operatorr;//intizizes opertatorr variable as a character
  float first, second;//initizalized using float to make sure when we divide it wont error out because of decimal points, and give us correct answer
  printf("Enter an operator (+, -, *, /,F(Floor),C(Ceiling),P(Power),S(Square root)),O(A+B)^2: ");//Prints the operators for the client
  
  scanf("%c", &operatorr);//Gets the input from client and sets it to the operatorr variable
  //printf("Enter two Numbers: ");//Prints the string
  //scanf("%f %f", &first, &second);//Gets the input of 2 numbers which are float type

  switch (operatorr) {//using a switch to determine which action should be done based on operator
    printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);
    case '+'://if its adding
      printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);
      printf("%.1f + %.1f = %.1f", first, second, first + second);//Adds the first and second numbers together to 1 decimal point
      break;//Breaks the current loop case
    case '-'://if subtracting
      printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);
      printf("%.1f - %.1f = %.1f", first, second, first - second);//Subtracts the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '*'://If multiplying
      printf("Enter two Numbers: ");//Prints the string
      
  scanf("%f %f", &first, &second);
      printf("%.1f * %.1f = %.1f", first, second, first * second);//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case '/'://If dividing 
      printf("Enter two Numbers: ");//Prints the string
  scanf("%f %f", &first, &second);
      printf("%.1f / %.1f = %.11f", first, second, first / second);//Divides the first and second variable together to 11 decimal points. I wanted more accuracy when dividing. 
    break;
    
    case 'C'://If multiplying
      printf("Enter one Number: ");//Prints the string
  scanf("%f", &first);
      printf("%.1f\n", ceil(first));//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case 'P'://If multiplying
      printf("Enter two Numbers(number then power):  ");//Prints the string
  scanf("%f %f", &first, &second);
      printf("%.1f\n", pow(first,second));//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case 'S'://If multiplying
      printf("Enter one Number: ");//Prints the string
  scanf("%f", &first);
      printf("%.1f\n", sqrt(first));//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
    case 'F'://If multiplying
      printf("Enter one Number: ");//Prints the string
  scanf("%f", &first);
      printf("%.1f\n", floor(first));//Multiplys the first and second variable together to 1 decimal point
      break;//Breaks the current loop case
      case 'O'://If multiplying
      printf("Enter two Numbers:  ");//Prints the string
  scanf("%f %f", &first, &second);
      printf("%.1f\n", pow((first+second),2));//Multiplys the first and second variable together to 1 decimal 
    break;
    // operator doesn't match any case constant
    default://If nothing else "catches" will default to this
      printf("Error! operator is not correct");//Error messege to print if incorrect operator was given
  }


  return 0;
}