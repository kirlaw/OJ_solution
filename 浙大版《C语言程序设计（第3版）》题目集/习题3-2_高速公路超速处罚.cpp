#include<stdio.h>

int main(){
    int c,l;
    scanf("%d %d",&c,&l);
    double ex;
    ex=(c-l)*100.0/l;
    if(ex>=10&&ex<50){
        printf("Exceed %.f%%. Ticket 200",ex);
    }
    else if(ex>=50){
        printf("Exceed %.f%%. License Revoked",ex);
    }
    else{
        printf("OK");
    }
    return 0;
}