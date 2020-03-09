#include<stdio.h>

//计算阶乘
double fact(int n){
    double a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    double c;
    c=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f",c);
    return 0;
}