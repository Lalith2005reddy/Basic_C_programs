/*#include <stdio.h>
int main(){
    float p,t,r,si;
    printf("Enter Principle Amount : ");
    scanf("%f",&p);
    
    printf("Enter Time : ");
    scanf("%f",&t);
    
    printf("Enter Rate : ");
    scanf("%f",&r);
    
    si = (p*t*r)/100;
    
    printf("The Interest is : %0.3f",si);
    
    return 0;
}*/
#include<stdio.h>
int main(){
    int a=10,b=11,c=13,d;
    d=(a=c,b+=a,c=a+b+c);
    printf("%d %d %d %d",d,a,b,c);
   // printf("%zu %zu",sizeof(3.14),sizeof(3.14f));
    return 0;
}