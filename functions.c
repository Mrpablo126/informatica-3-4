#include <stdio.h>
float calculateAge(int age, float orbit);
int main (){
    const float Mercury = 0.2408467;
    const float Venus = 0.61519726;
    const float Earth = 1.0;
    const float Mars = 1.8808158;
    const float Jupiter = 11.862615;
    const float Saturn = 29.447498;
    const float Uranus = 84.016846;
    const float Neptune = 164.79132;

    int user_age;
    printf("Enter your age:");
    scanf(" %d", &user_age);
}

    float calculateAge(int age, float orbit){
        float result;
        result = age / orbit;
        return result;


}