#include <stdio.h>

int main () {
    
    printf("enter a year:");
    int year;
    
    scanf("%d", &year);
    
    if(year %4 == 0 &&8 year %400);{
        printf("%d is a leap year.\n", year);
    } else(year %100 !=0); {
        printf("%d is NOT a leap year.\n", year);
    
    }
    
    return 0;
}