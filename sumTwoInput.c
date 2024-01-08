#include <stdio.h>
int main(){
    int a, b, addAB;
    printf("Enter the first number to be added:");
    scanf("%d", &a);
    printf("\n Enter the second number to be added:");
    scanf("%d", &b);
    addAB = a + b;
    printf("\n The sum of the given numbers is '%d'", addAB);
    
    return 0;
}