#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum=a+b+c+d;
    double avg=(a+b+c+d)/4.0;
    printf("Sum = %d; Average = %.1f",sum,avg);
    return 0;
}