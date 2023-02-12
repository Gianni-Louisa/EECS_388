#include <stdio.h>
//Gianni Louisa
//Gets an input from the user for the max number they want to check the prime numbers up to.

int main() {
       int limitt;//Defines variable limitt as an int
        printf("What number would you like me to scan up to?: ");//Prints the current string
        scanf("%d",&limitt);//Asks the user for the input that is a number and is then set to the variable limitt
        for(int count=2;count <= limitt;count++){//for loop that starts at 2 because prime numbers are greater than 1, and will run until the count is greater than the user defined limit. and add 1 to count each iteration.
          //printf("%d \n",count); Tester
          int PrimeNumbers = 1;//intital value set to 1
          for (int lower = 2; lower < count; lower++) {// for loop which will start at 2 again but will go until lower is greater than the current count, and add 1 to every iteration to lower.
            if (count % lower == 0) {//If the count mod lower is equal to zero
            PrimeNumbers = 0;//sets prime number to 0 which means no its not a prime number
            break;//breaks the loop
          }
        }
          if (PrimeNumbers == 1) {//if the number is a prime number
            printf("%d \n ", count);//prints the number with a new line character behind it.
          }
          }
  return 0;//returns nothing
}