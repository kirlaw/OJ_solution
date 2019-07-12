#include<bits/stdc++.h>
using namespace std;

int main(){
    char n;
    int sum=0;
    string num[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while((n = getchar()) != '\n')
        sum = sum + n - '0';
    //n的范围内sum不会有千位
    if(sum/100){
        cout<<num[sum/100]<<" ";
    }
    if(sum/10){//保证十位为0时能进入 
        cout<<num[sum/10%10]<<" ";
    }
    cout<<num[sum%10];
    return 0;
}
