#include<stdio.h>
#include<math.h>

int main(){
    double x,y;
    scanf("%lf",&x);
    if(x>=0){
        y=pow(x,0.5);
    }
    else{
        y=(x+1)*(x+1)+2*x+1/x;
    }
    printf("f(%.2f) = %.2f",x,y);
    return 0;
}