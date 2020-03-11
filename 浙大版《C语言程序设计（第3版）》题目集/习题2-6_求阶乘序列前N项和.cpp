#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int c=1;
    for(int i=1;i<=n;i++){
        sum=sum+c*i;
        c=c*i;
    }
    printf("%d",sum);
    return 0;
}