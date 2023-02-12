#include <stdio.h>
//Gianni Louisa
//This program is a converter between binary and hexidecimal and hexidecimal to binary.

int main() {//main function
  int inputt;// input variable
  printf(
      "Give me 1 for Hexidecmial to binary or 2 for binary to Hexidecmial: ");//prints the messege which converter youd like to go into
  scanf("%d", &inputt);//takes input from user and saves to inputt variable
  if (inputt == 1) {//if the inputt is 1 so hexidecmial to binary
    char hexdec[10];//the character value for hexdecimal
    printf("Give me a hexdecimal: ");//prints
    scanf("%s", &hexdec);//from the user gets hexidecimal they want converted
    printf("That value in binary is: ");// gives the value back to user
    long int i = 0;// sets the i value to 0

    while (hexdec[i]) {//iterates through depending on how many charatcers are present
      // printf("%c \n",hexdec[i]);
      switch (hexdec[i]) {//a switch to decide which value will go to which binary value
      case '0'://if charcter == 0
        printf("0000");//prints the binary conversion of character
        break;//breaks current loop
      case '1'://if charcter == 1
        printf("0001");//prints the binary conversion of character
        break;//breaks current loop
      case '2'://if charcter == 2
        printf("0010");//prints the binary conversion of character
        break;//breaks current loop
      case '3'://if charcter == 3
        printf("0011");//prints the binary conversion of character
        break;//breaks current loop
      case '4'://if charcter == 4
        printf("0100");//prints the binary conversion of character
        break;//breaks current loop
      case '5'://if charcter == 5
        printf("0101");//prints the binary conversion of character
        break;//breaks current loop
      case '6'://if charcter == 6
        printf("0110");//prints the binary conversion of character
        break;//breaks current loop
      case '7'://if charcter == 7
        printf("0111");//prints the binary conversion of character
        break;//breaks current loop
      case '8'://if charcter == 8
        printf("1000");//prints the binary conversion of character
        break;//breaks current loop
      case '9'://if charcter == 9
        printf("1001");//prints the binary conversion of character
        break;//breaks current loop
      case 'A'://if charcter == A
      case 'a':
        printf("1010");//prints the binary conversion of character
        break;//breaks current loop
      case 'B'://if charcter == B
        printf("1011");//prints the binary conversion of character
        break;//breaks current loop
      case 'C'://if charcter == C
      case 'c':
        printf("1100");//prints the binary conversion of character
        break;//breaks current loop
      case 'D'://if charcter == D
      case 'd':
        printf("1101");//prints the binary conversion of character
        break;//breaks current loop
      case 'E'://if charcter == E
      case 'e':
        printf("1110");//prints the binary conversion of character
        break;//breaks current loop
      case 'F'://if charcter == F
      case 'f':
        printf("1111");//prints the binary conversion of character
        break;//breaks current loop
      default://if nothing else works
        printf("\nInvalid hexadecimal digit %c", hexdec[i]);//prints out that its invalid
      }
      i++;//adds 1 to i to check next character in string
    }
  } else {//if its not hex to binary it then is binary to hex
    long int binary, hex = 0, i = 1, mod;//intizizes the variables
    printf("Enter the binary number: ");//prints
    scanf("%ld", &binary);//gets the binary number from user
    while (binary != 0) {//while the binary isnt 0
      mod = binary % 10;//get the mod 10 of the binary
      hex = hex + mod * i;// takes the mod multiplied by i then added to the hex
      i = i * 2;//multiplies current i times 2
      binary = binary / 10;// binary num didvided by 10
    }
    printf("the hexdecimal is: %lX", hex);//prints the hexidecimal using the lX which makes sure its unassigned int
    }
  return 0;//returns nothing
}