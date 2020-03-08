#include<stdio.h>
int main(){
    double x;
    scanf("%lf",&x);
    double y;
    if(x==0){
        y=0;
    }
    else{
        y=1.0/x;
    }
    printf("f(%.1f) = %.1f",x,y);
    return 0;
}