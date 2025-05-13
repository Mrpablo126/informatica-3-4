#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int result, num;
    printf("Enter the number of dice rolled:");
    scanf(" %d", &num);

    int a = 0;
    while( num != 0 ){
     --num;
    ++a;
    int diceRoll = (rand() % 6) + 1;

    printf("Roll %d: %d\n",a, diceRoll);
    }   
    
    
    
    
    
    
    
    
    
    
    return 0;
}