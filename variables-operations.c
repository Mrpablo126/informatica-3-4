#include <stdio.h>

int main() {
   int length = 10;
    int width = 5;
    int X = (length * width);
    int Y = (width * 2 + length *2);

    printf("1. \n");
    printf("Area = %d \n", X);
    printf("Perimeter = %d \n", Y);
    printf("2. \n");

    int F = 95;
    int C = (F - 32)/1.8;

    printf("65°F = 35°C");

    int minutes = 349;
    int hour = (minutes / 60);
    int time = (minutes %60);
    
    printf("\n3.\n");
    printf("%d minutes is equal to %d hours and %d minutes.\n", minutes, hour, time);
    
    return 0;
}
