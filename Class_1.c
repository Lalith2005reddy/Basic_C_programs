#include <stdio.h>
int main(){
    int a[5][2] = {{1,2},{2,4},{3,0},{4,0},{5,1}};
/*int i,f,n;
printf("no");
scanf("%d",&n);
for(i=1;i<=n;++i){
f *= i;
}
printf("%d is %llu",n,f);*/
/*for(int i=0;i<5;i++)
{
scanf("%d", &a[i]);
}
for(int i=0;i<5;i++)
{
printf("%d",a[i]);
}*/
int *ptr = a;
for(int i=0;i<5;i++){
    for(int j=0;j<2;j++)
        printf("\n%d",*(*(a + i)+j));
}
return 0;
}