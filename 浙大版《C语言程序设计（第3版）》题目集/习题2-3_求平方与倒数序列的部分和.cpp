#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    double sum=0;
    for(double i=m;i<=n;i++){
        sum+=i*i+1/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}