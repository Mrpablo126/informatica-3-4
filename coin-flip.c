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

    if(n == coin){
        printf("Correct\n");
    } else{
        if(n != coin){
            printf("Wrong\n");
        } else{
            if(n >= 3){
                printf("ERROR");
            }
        }
    }


   if(coin == 1){
    printf("The correct answer is Head\n");
   } else{
    if(coin == 2){
        printf("The correct answer is Tails\n");
    } else{
        if(coin <= 3){
            printf("ERROR");
        }
    }
   }
   
   
   

    

    
























    return 0;
}