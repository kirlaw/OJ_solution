#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {return a > b;}

int main(){
    int K;
    cin>>K;
    vector<int> v(K);
    int array[10000];  //记录关键数
    int n;
    for(int i=0;i<K;i++){
        cin>>n;
        v[i]=n;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=(n*3+1)/2;
            }
            if(array[n]==1){
                break;
            }
            array[n]=1;
        }
    } 
    sort(v.begin(),v.end(),cmp);
    int flag=0;
    for (int i = 0; i < K; i++) {
        if (array[v[i]] == 0) {
            if(flag==1){
                cout<<" ";
            }
            cout<<v[i];
            flag=1;         
        }
    }
    return 0;
}