#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10]; // 保存每种数字的个数
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int j=1;
    while(true){
        if(a[0]==0){
            break;
        }
        if(a[j]!=0){
            cout<<j;
            a[j]--;
            break;
        }
        j++;
    }
    for(int i=0;i<10;i++){
        while(a[i]!=0){
            cout<<i;
            a[i]--;
        }
    }
    return 0;
}