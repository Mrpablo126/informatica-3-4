#include <stdio.h>

int main() {
    
    //1

    int length ;
    int width ;
    int X = (length * width);
    int Y = (width * 2 + length *2);

    printf("1. \n");

    printf("enter rectangle width:");

    scanf("%d", &width);
    printf("enter rectangle lengh:");
    scanf("%d", &length);
        printf("Area = %d \n", X);
    printf("Perimeter = %d \n", Y);
   
    printf("2. \n");
    

    int Fahrenheit;
    printf("Enter temperature in Fahrenheit:");
    scanf("%d", &Fahrenheit);

    int C = (Fahrenheit-32)/1.8;

    printf("%d°F = ",Fahrenheit);
    printf("%d°C\n" , C );
    //3

    int minutes;
    printf("enter minutes:");
    scanf("%d", &minutes);
    int hour = (minutes / 60);
    int extramins = (minutes %60);
    
    printf("%d hours and %d minutes \n", hour, extramins);

    //
    int radius;
    printf("Enter a radius:");
    scanf("%d", &radius);
    int diameter = radius*2;
    float perimeter = diameter*3.14;
    printf("The perimeter of the circle is %.2f\n", perimeter);

    return 0;
}
