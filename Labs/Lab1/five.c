#include <stdio.h>
//Gianni Louisa
//This program takes input of a array and takes that array and finds the duplicates inside of it
int main() {//main function
int numbers[] = {25,50,75,25,100,13,22,1222,32222,12,13,32222};//test array
//char numbers[] = {'Gianni',"Carmine","Gianni"}
    int len =sizeof(numbers)/sizeof(numbers[0]);//finds the length of list by dividing size of the list by the first
    //printf("%d",len); //for testing
    for(int i = 0; i < len; i++){//for loop that goes until its looped through entire list
      for(int k=i+1; k < len;k++){//for loop that starts one past where i is currently at then checks past
        if(numbers[i]==numbers[k]){//if these 2 are equal that means there are duplicates because k wont see the same numbers as i due to how I set up the for loop.
          printf("%d \n",numbers[i]);//prints the current number it finds duplicated 
        }
        
      }
    }
  return 0;//returns nothing
}