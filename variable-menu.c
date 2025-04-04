#include <stdio.h>

int main () {
    char snack1[] = "Doritos";
    float price1 = 15.96;
    int stock1 = 13;

    char snack2[] = "soda";
    float price2 = 15.50;
    int stock2 = 18;
    
    char snack3[] = "picafresa";
    float price3 = 500.00;
    int stock3 = 100000;
    printf("Welcome to the snack Shop!\n");
    printf("--------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Available\n", snack2, price2, stock2);
    printf("3. %s - $%.3f - %d Available\n", snack3, price3, stock3);                            

    return 0;
}