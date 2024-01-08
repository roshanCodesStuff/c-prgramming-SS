#include <stdio.h>
float main(){
    const float PI = 3.14;
    float raiDus, AOC;
    printf("Enter the radius in cm: \t");
    scanf("%f", &raiDus);
    AOC = PI * raiDus * raiDus;
    printf(" \n The radius of the circle with radius '%.2f cm' is '%.2f cm^2.'", raiDus, AOC);
}