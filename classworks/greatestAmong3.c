#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    if (a < b && c < b){            //use of logical opperators
        printf("the second number '%d' is the greatest number.", b);
    } else if(a < c && b < c){
        printf("the third number '%d' is the greatest number.", c);
    } else{
        printf("the first number '%d' is the greatest number.", a);
    } 
    return 0;
}