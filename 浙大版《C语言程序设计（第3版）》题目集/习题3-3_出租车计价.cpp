#include<stdio.h>

int main(){
    double mile;
    int t;
    scanf("%lf %d",&mile,&t);
    double cost;
    if(mile<=3){
        cost=10;
    }
    else if(mile>3&&mile<=10){
        cost=10+(mile-3)*2;
    }
    else{
        cost=10+14+(mile-10)*3;
    }
    if(t>=5){
        cost=cost+(t/5)*2;
    }
    printf("%.f",cost);
    return 0;
}