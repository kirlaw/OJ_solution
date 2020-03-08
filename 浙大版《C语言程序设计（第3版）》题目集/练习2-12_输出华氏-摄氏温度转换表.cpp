#include<stdio.h>

int main(){
    int lower,upper;
    scanf("%d %d",&lower,&upper);
    if(lower>upper){
        printf("Invalid.");
        return 0;
    }
    printf("fahr celsius\n");
    double c;
    for(int i=lower;i<=upper;i=i+2){
        c=5*(i-32)/9.0;
        printf("%d% 6.1f\n",i,c);
    }
    return 0;
}