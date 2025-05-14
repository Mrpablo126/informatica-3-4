#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

    int coin = (rand() %2) +1;
    int n;
    printf("Start the challenge\n");

    printf("head = 1\n");
    printf("tail = 2\n");

    printf("Guess the correct answer:");
    scanf(" %d", &n);


   if(coin == 1){
    printf("Head\n");
   } else{
    if(coin == 2){
        printf("Tails\n");
    }
   }
   
   
   

    

    
























    return 0;
}