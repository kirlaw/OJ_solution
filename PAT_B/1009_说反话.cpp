#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char ch;
    stack<string> str;
    while(cin>>s){
        str.push(s);
        if ((ch = getchar()) == '\n'){
            break;
        }
    }
    cout<<str.top();
    str.pop();
    while(!str.empty()) {
        cout << " " << str.top();
        str.pop();
    }
    return 0;
}