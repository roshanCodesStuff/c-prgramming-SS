//Take one integer input from the user. Check whether the number is  divisible by 2 and 5.
//If the number is divisible then increment the number, if the number is only one of the 2 and 5
//then decrement the number else leae the number as it is and print
#include <stdio.h>
int main(){
    int value;
    printf("Enter a number:");
    scanf("%d", &value);
    if (value % 2 == 0 && value % 5 == 0){
        value = ++value;
        printf("The number was divisible by both 2 and 5 so the increment of the number '%d' is printed.", value);
    }else if (value % 2 == 0 || value % 5 == 0){
        value = --value;
        printf("The number was divisible by either 2 or 5 so the decrement of the number '%d' is printed.", value);
    }else {
        printf("The number was not divisible by neither 2 nor 5 so the number '%d' is printed as it is.",value);
    }
    return 0;
}