#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sign;
    if(n<0){
        sign=-1;
    }
    else if(n==0){
        sign=0;
    }
    else{
        sign=1;
    }
    printf("sign(%d) = %d",n,sign);
    return 0;
}