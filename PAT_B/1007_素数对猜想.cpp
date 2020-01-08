#include<bits/stdc++.h>

using namespace std;

//判断是否为素数
bool isprime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int sum=0; //符合条件的素数对个数
    for(int i=5;i<=n;i++){
        if(isprime(i)&&isprime(i-2)){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}