#include<stdio.h>
int main(){
    float f,c;
    printf("Enter Temp In Fahrenheit :");
    scanf("%f",&f);
    c = (f-32) * 5/9;
    printf("The Temp in Celsius : %0.3f",c);
    return 0;
}