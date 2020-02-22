#include<bits/stdc++.h>

using namespace std;

typedef struct mooncake{
    double store;
    double totalprice;
    double unitprice;
}mooncake;

bool cmp(mooncake a,mooncake b){
    return a.unitprice>b.unitprice;
}
int main(){
    int N,D; //月饼种类  市场最大需求量
    cin>>N>>D;
    mooncake cake[N];
    double earn=0;
    for(int i=0;i<N;i++){
        cin>>cake[i].store;
    }
    for(int i=0;i<N;i++){
        cin>>cake[i].totalprice;
        cake[i].unitprice=cake[i].totalprice/cake[i].store;
    }
    sort(cake,cake+N,cmp);
    int d=0; //现在已有的月饼量
    int j=0;
    while(d!=D&&j<=N){
        if(cake[j].store+d>=D){
            earn=earn+(D-d)*cake[j].unitprice;
            d=D;
        }
        else{
            earn=earn+cake[j].store*cake[j].unitprice;
            d=d+cake[j].store;
        }
        j++;
    }
    printf("%.2f",earn);
    return 0;
}