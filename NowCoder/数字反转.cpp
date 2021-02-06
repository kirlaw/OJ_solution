#include<bits/stdc++.h>
using namespace std;

//将数反转
int reverse_num(int n){
    int num = 0;
    while(n){
        num = num*10+n%10;
        n/=10;
    }
    return num;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        if((reverse_num(a)+reverse_num(b)) == reverse_num(a+b)){
            cout<<a+b<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}