#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    int d1,d2;
    int num1=0,num2=0;
    int p1=0,p2=0;
    cin>>a>>d1>>b>>d2;
    while(a){
        if(a%10==d1){
            num1++;
        }
        a=a/10;
    }
    while(b){
        if(b%10==d2){
            num2++;
        }
        b=b/10;
    }
    for(int i=0;i<num1;i++){
        p1=p1+d1*pow(10,i);       
    }
    for(int i=0;i<num2;i++){
        p2=p2+d2*pow(10,i);       
    }
    cout<<p1+p2;
    return 0;
}