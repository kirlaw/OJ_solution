#include<bits/stdc++.h>

int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}


//非递归
/*
int main(){
    int n;
    scanf("%d",&n);
    int f1=0;
    int f2=1;
    if(n==0){
        printf("%d",f1);
    }
    else if(n==1){
        printf("%d",f2);
    }
    else{
        int f;
        for(int i = 1;i<n;i++){
            f = f1+f2;
            f1 = f2;
            f2 = f;
        }
        printf("%d",f);
    }
    return 0;
}
*/