#include <stdio.h>

int main () {
    
    printf("enter a year:");
    int year;
    
    scanf("%d", &year);
    
    int years = year%4;
    int yearss = year%100;
    int yearsss = year%400;
    if(years == 0){
        if(yearss == 0){
            if(yearsss == 0){

            } else {
            printf("%d is not a leap year",year);
        }
        }else{
        printf("%d is a leap year",year);
    }
    }else{
        printf("%d is not a leap year", year);
    }
    
    return 0;
}