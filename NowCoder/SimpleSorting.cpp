#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    cout<<a[0]<<" ";
    for(int i=1;i<N;i++){
        if(a[i]!=a[i-1]){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}