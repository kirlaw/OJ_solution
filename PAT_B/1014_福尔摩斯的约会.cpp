#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;
    string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    int i=0;
    char t[2];
    while(i<str1.length()&&i<str2.length()){
        if(str1[i]==str2[i]&&str1[i]>='A'&&str1[i]<='G'){
            t[0]=str1[i];
            i++;
            break;
        }
        i++;
    }
    while(i<str1.length()&&i<str2.length()){
        if(str1[i]==str2[i]&& ((str1[i] >= 'A' && str1[i] <= 'N') || isdigit(str1[i]))){
            t[1]=str1[i];
            break;
        }
        i++;
    }
    int j=0;
    while(j<str3.length()&&j<str4.length()){
        if(str3[j]==str4[j]&&isalpha(str3[j])){
            break;
        }
        j++;
    }
    cout<<week[t[0]-'A'];    
    int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
    printf("%02d:%02d", m, j);
}