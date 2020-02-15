#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n<=1){return false;}
    for(int i=2;i*i<=n;i++){
        if(n%i==0){return false;}
    }
    return true;
}

int main(){
    int m,n;
    cin>>m>>n;
    int num=0;  //素数的个数
    for(int i=1;num<=n;i++){
        if(isPrime(i)){
            num++;
            if(num>=m&&num<=n){
                cout<<i;
                if(num!=n&&(num-m+1)%10!=0){
                    cout<<" ";
                }
                else if(num!=n&&(num-m+1)%10==0){
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}