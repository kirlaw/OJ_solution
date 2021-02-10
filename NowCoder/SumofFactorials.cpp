#include<bits/stdc++.h>
using namespace std;
//求阶乘
int fac(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main(){
    int n;
    int a[10];
    while(cin>>n){
        for(int i=10;i>0;i--){
            a[i] = fac(i-1);
            if(n>=a[i]){
                n-=a[i];
            }
        }
        if(n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }//while
    return 0;
}