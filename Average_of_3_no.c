#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter 1st Number : ");
    scanf("%f",&a);
    printf("Enter 2nd Number : ");
    scanf("%f",&b);
    printf("Enter 3rd Number : ");
    scanf("%f",&c);
    printf("The Average of Three Numbers Is : %0.3f" , (a+b+c)/3);
    return 0;
}