#include <stdio.h>,<math.h>

int main(){//main function
    float first,second;//declares first and second as floats
    char sign;//declares sign as a char
    printf("Welcome to Calculator! \n");//welcome messege
    printf("Please enter your calculation in this format (Number) (sign) (Number) \n");//format messege
    printf("For speacility operations use the following for operator sign: F(Floor),C(ceiling),S(squareroot),P(power),O(a^2+b^2)");
    scanf("%f %c",&first, &sign);//gets the input from the user in a float char float format to then be assigned to variables
    if ((sign == 'C') || (sign == 'F') || (sign == 'S')){// checks to see if the sign is a C F or S to indicate it only needs one number as input
        printf(" ");//nothing
    }else{//If it doesnt need only one number as input it takes the other number given
        scanf("%f",&second);}//Gets the float and saves as second variable

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
        case 'C'://If multiplying
        printf("%.1f\n", ceil(first));//Multiplys the first and second variable together to 1 decimal point
        break;//Breaks the current loop case
        case 'P'://If multiplying
        printf("%.1f\n", pow(first,second));//Multiplys the first and second variable together to 1 decimal point
        break;//Breaks the current loop case
        case 'S'://If multiplying
        printf("%.11f\n", sqrt(first));//Multiplys the first and second variable together to 1 decimal point
        break;//Breaks the current loop case
        case 'F'://If multiplying
        printf("%.1f\n", floor(first));//Multiplys the first and second variable together to 1 decimal point
        break;//Breaks the current loop case
        case 'O'://If multiplying
        printf("%.1f\n", pow((first+second),2));//Multiplys the first and second variable together to 1 decimal 
        break;
        // operator doesn't match any case constant
        default://If nothing else "catches" will default to this
        printf("Error! operator is not correct");//Error messege to print if incorrect operator was given
    }


    return 0;
}