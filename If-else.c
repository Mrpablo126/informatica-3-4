#include <stdio.h>

int main () {

    // Equal or not equal
    int num1;
    int num2;
    printf("1.\n");
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

   if (num1 == num2){
    printf("%d is equal  to %d \n", num1, num2);
   } else{
    printf("%d is NOT equal  to %d \n", num1, num2);
    
   }
   // Even or Odd numbers
   printf("2.\n");
   int num;
   printf("Enter a number:");
   scanf("%d", &num);
   if(num %2 == 0){
    printf("%d is a even number \n", num);
    } else {
    printf("%d is a odd number \n", num);
    
    }
   // Week numbers
   
   int weekn;
   printf("Insert the number:"); 
   scanf("%d", &weekn);
   if(weekn == 1){
   printf("Sunday\n");
    } else if(weekn == 2) {
        printf("Monday\n");
    } else if(weekn == 3) {
        printf("Thursday\n");
    } else if(weekn == 4) {
        printf("Wednesday\n");
    } else if(weekn == 5){
        printf("Thursday\n");
    } else if(weekn == 6) {
        printf("Friday\n");
    } else if(weekn == 7) {
        printf("Saturday\n");
    }
    // Calculator
    printf("Welcome to my calculator \n");
    float num3;
    float num4;
    printf("Insert first number:");
    scanf("%f", &num3);
    printf("Insert second number:");
    scanf("%f", &num4);
    float ope;
    printf("Insert the command:");
    scanf("%f", &ope);
    if(ope == 1) {
       
        float addition = num3 + num4;
        printf("Result: %.2f\n", addition);
    } else if(ope == 2){
      float subtraction = num3 - num4;
        printf("Result: %.2f\n", subtraction);
    } else if(ope == 3){
        float Multiplication = num3 * num4;
        printf("Result: %.0f\n", Multiplication);
    } else if(ope == 4){
        float Division = num3 / num4;
        printf("Result: %.2f\n", Division);
    }

        






    return 0;
}