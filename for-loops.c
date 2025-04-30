#include <stdio.h>
int main(){
//Example
/*int i;
for(i= 1; i < 6; ++i);

printf("%d", i);
    
return 0;*/

//Exercise 1

int n;

printf("Enter a positive number:");
scanf("%d",&n);

int i;
int sum = 0;
for (i= 1; i < n + 1; ++i){
    sum = sum + i;
}
    printf("%d \n", sum);
//Exercise 2
int m;

printf("Enter a positive number:");
scanf("%d",&m);

int a;
int mul = 1;
for (a = 1; a < m + 1; ++a){
    mul = mul * a;
    
}
    printf("%d \n", mul);
}