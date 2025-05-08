#include <stdio.h>
int main (){
int n;
int count;
printf("Enter the base number:");
scanf(" %d", &n);

printf("\n");
int o;

printf("Enter the exponent number:");
scanf(" %d", &o);

do{
    n = n * 2;

    ++count;

}while(n != 0);
printf("Result: %d ^ %d = %d", n, o, count);



    return 0;
}