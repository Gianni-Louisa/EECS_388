#include <stdio.h>
//Gianni Louisa
//This program takes in a number from the user then catagroizes the number within 3 set height groups then returns to the user their 
int main() {
  //#2

        int testInteger;//Intizilizes integer variable
        printf("Give me a height you want me to cataegorize in centimeters: ");//prints
        scanf("%d", &testInteger);  //gets input of a integer and updates testInteger
        printf("Your Height is = %d cm",testInteger);//prints the height that was inputted
        if (testInteger > 100){//If greater than 100
          printf("\nYour Tall!\n");}//print
        else if (testInteger > 50){//if not greater than 100 but greater than 50
          printf("\nYour Medium\n");}//print
        else;{//if the above 2 statements arent met 
          printf("\nYour Short\n");}//print
        return 0;//return nothing

  return 0;
}