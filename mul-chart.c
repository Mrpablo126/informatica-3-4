#include <stdio.h>
int main(){
    
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    
    
    for(int row = 1; row <= num; row++){
        for(int c = 1; c <= num; c++){
        int mul = row * c;
        printf("%d\t", mul);
    }
    
    printf("\n");
}
    
    
    
    
    
    
    return 0;
}