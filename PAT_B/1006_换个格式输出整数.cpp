#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; //n<1000
    cin>>n;
    int a,b,c; //百位 十位 个位
    while(n){
        if(n>=100){
            a=n/100;
            for(int i=0;i<a;i++){
                cout<<"B";
            }
            n=n-a*100;
        }
        if(n>=10){
            b=n/10;
            for(int i=0;i<b;i++){
                cout<<"S";
            }
            n=n-b*10;
        }
        if(n>0){
            c=n;
            for(int i=0;i<c;i++){
                cout<<i+1;
            }
            n=0;
        }
    }
    return 0;
}