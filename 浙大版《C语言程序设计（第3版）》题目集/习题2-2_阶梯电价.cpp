#include<stdio.h>

int main(){
    double elec;
    scanf("%lf",&elec);
    double cost;
    if(elec<0){
        printf("Invalid Value!");
        return 0;
    }
    else if(elec<=50){
        cost=elec*0.53;
    }
    else{
        cost=50*0.53+(elec-50)*0.58;
    }
    printf("cost = %.2f",cost);
    return 0;
}