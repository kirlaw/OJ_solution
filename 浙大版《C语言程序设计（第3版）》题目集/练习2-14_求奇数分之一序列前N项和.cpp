#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    double d=1;
    for(int i=1;i<=n;i++){
        sum+=1/d;
        d+=2;
    }
    printf("sum = %.6f",sum);
    return 0;
}