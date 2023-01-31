#include <stdio.h>


int main() {
  char name[100];//initizlizes the name variable up to 100 characters
  char *ptr=name;//sets the pointer equal to the name variable or points the pointer
  printf("Input a word you'd like to count the characters in (below 100): ");//prints
  scanf("%s",&name);//gets the current string we want to find the length of from user.

  int length = 0;//length is initizilzes at 0
  while (*ptr != '\0'){// while the pointer isnt null
    length++;//add 1 to the length every iteration
    ptr++;//move one character in the string
  }
  printf("It was %d characters long!", length);//prints how long the character is from how many times the pointer iterated through the string

  return 0;
}