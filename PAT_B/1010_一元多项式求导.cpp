#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=0;
    int coef,expo;
    int flag=0;
    while(cin>>coef>>expo){      
        if (expo==0){
            break;
        }
        
        if(i!=0){
            cout<<" "<<coef*expo<<" "<<expo-1;
            flag=1;
        }
        else{
            cout<<coef*expo<<" "<<expo-1;
            flag=1;
        }
        i++;
    }
    if (flag==0) {
        cout<<"0 0";
    }
    return 0;
}