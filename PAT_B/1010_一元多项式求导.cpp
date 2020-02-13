#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=0;
    int coef,expo;
    while(cin>>coef>>expo){      
        if (expo==0){
            break;
        }
        
        if(i!=0){
            cout<<" "<<coef*expo<<" "<<expo-1;
        }
        else{
            cout<<coef*expo<<" "<<expo-1;
        }
        i++;
    }
    return 0;
}