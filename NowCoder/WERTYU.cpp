#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    s = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int pos;
    string str1,str2;
    getline(cin,str1);
    //cin>>str1; 无法读入空格
    for(int i=0;i<str1.length();i++){
        if(str1[i]==' '){
            str2 += str1[i];
        }
        else{
            pos = s.find(str1[i]);
            str2 += s[pos-1];
        }
    }
    cout<<str2<<endl;
    return 0;
}