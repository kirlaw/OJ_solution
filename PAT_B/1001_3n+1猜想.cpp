#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m=0;//步数
    cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(3*n+1)/2;
        }
        m++;
    }
    cout<<m;
    return 0;
}
