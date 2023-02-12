#include <stdio.h>

int main(){//main function
    float first,second;//declares first and second as floats
    char sign;//declares sign as a char
    printf("Welcome to Calculator! \n");//welcome messege
    printf("Please enter your calculation in this format (Number) (sign) (Number) \n");//format messege
    scanf("%f %c %f",&first, &sign, &second);//gets the input from the user in a float char float format to then be assigned to variables
    //printf(first);
    //printf(sign);
    switch(sign){//a switch to decide what operator was given
        case '+'://if adding
        printf("%.1f + %.1f = %.1f \n", first, second, first + second);//adds two floats together with one decimal point showing
        break;//break the current loop
        case '-'://if dividing
        printf("%.1f - %.1f = %.1f \n", first, second, first - second);//subtracts two floats together with one decimal point showing
        break;//break the current loop
        case '*'://if multiplying
        printf("%.1f * %.1f = %.1f \n", first, second, first * second);//multiplies two floats together with one decimal point showing
        break;//break the current loop
        case '/'://if dividing
        printf("%.1f / %.1f = %.11f \n", first, second, first / second);//divides two floats together with 11 decimal point showing (wanted more accuracy but could be changed by changing it from %.11f to %.1f)
        break;//break the current loop


}
    return 0;
    }