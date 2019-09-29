#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;//机器人数
    cin>>n;
    int len[n];//身高
    for(int i=0;i<n;i++){
        cin>>len[i];
    }
    int see[n];
    fill(see,see+n,0);
    int j=1;
    for(j;j<n;j++){
        for(int i=j-1;i>=0;i--){
            if(i!=j&&len[j]<=len[i]){
                see[i]++;
                break;
            }
        }
    }
    int max=0;
    int maxrobot=0;
    for(int i=0;i<n;i++){
        if(see[i]>max){
            max=see[i];
            maxrobot=len[i];
        }
    }
    cout<<maxrobot;
    return 0;
}
