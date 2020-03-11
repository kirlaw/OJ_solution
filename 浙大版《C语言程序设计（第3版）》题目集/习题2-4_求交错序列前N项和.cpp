#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    double mole=1,deno=1; //分子 分母
    double sum=0;
    int a=1;
    for(int i=0;i<n;i++){
        sum+=mole/deno*a;
        a=-a;
        mole++;
        deno+=2;
    }
    printf("%.3f",sum);
    return 0;
}