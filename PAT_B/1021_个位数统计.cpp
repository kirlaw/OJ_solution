#include<bits/stdc++.h>

using namespace std;

int main(){
    string N;
    cin>>N;
    int num[10];  //统计0-9的个数
    fill(num,num+10,0);
    for(int i=0;i<N.length();i++){
        num[N[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(num[i]!=0){
            cout<<i<<":"<<num[i]<<endl;
        }
    }        
    return 0;
}