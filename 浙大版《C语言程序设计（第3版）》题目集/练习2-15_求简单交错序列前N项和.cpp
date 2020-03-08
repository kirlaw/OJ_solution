#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    double d=1;
    int x=1;
    for(int i=1;i<=n;i++){
        sum+=x*1/d;
        d+=3;
        x=-x;
    }
    printf("sum = %.3f",sum);
    return 0;
}