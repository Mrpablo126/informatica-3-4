#include <stdio.h>
int main(){
int n;
int m;
printf("Enter the height of the trinagle (number of rows):");
scanf(" %d", &n);

int i;
int j;
for(i = 1; i <= n; i++){
    for(j = 1;j <= i; j++){
    printf("*");
    }
    printf("\n");
}










    return 0;
}