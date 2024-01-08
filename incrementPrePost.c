#include <stdio.h>
int main(){
    int a, b, x;
    printf("Enter a number to be used: \t");
    scanf("%d", &a);
    printf("\n\n ********************************************************************************** \n ");
    b = a;
    x = ++a;
    printf(" \n the value of the input '%d' stored as a using increment PREFIX is --- '%d'", b ,a);
    printf(" \n the value of the input '%d' stored as x using increment PREFIX is --- '%d'", b ,a);
    printf("\n\n ********************************************************************************** \n ");
    a = b;
    x = a++;
    printf(" \n\n the value of the input '%d' stored as a using increment POSTFIX is --- '%d'", b ,a); 
    printf(" \n the value of the input '%d' stored as x using increment POSTFIX is --- '%d'", b ,x);
    
    return 0;
}