#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,d;
    cin>>a>>b>>d;
    int c=a+b;
    int fig[32],i=0;
    do{
        fig[i]=c%d;
        c=c/d;
        i++;
    }while(c);
    for(int j=i-1;j>=0;j--){
        cout<<fig[j];
    }
    return 0;
}