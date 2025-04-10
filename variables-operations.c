#include <stdio.h>

int main() {
    
    //1

    int length ;
    int width ;
    int X = (length * width);
    int Y = (width * 2 + length *2);

    printf("1. \n");
    printf("Area = %d \n", X);
    printf("Perimeter = %d \n", Y);
    printf("2. \n");
    printf("enter rectangle lengh");
    scanf("%d",&length);
    
    //2

    int Fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);

    int C = (Fahrenheit-32)/1.8;

    printf("%d°F = ",Fahrenheit);
    printf("%d°C\n" , C );
    //3

    int minutes;
    printf("%d minutes", minutes);
    scanf( %d, minutes);
    int hour = (minutes / 60);
    int extramins = (minutes %60);
    
    printf("%d hours and %d minutes \n", hour, extramins);


    return 0;
}
