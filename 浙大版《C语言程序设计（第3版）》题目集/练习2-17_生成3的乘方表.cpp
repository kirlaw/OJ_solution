#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    long long x;
    for(int i=0;i<=n;i++){
        x=pow(3,i);
        printf("pow(3,%d) = %d\n",i,x);
    }
    return 0;
}