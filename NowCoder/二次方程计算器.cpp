#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length();
    double a=0,b=0,c=0;
    double num=0; //num保存数
    int sign=1,opt=1; //等号左边sign=1，右边-1 若加opt=1,减-1
    for(int i=0;i<s.length();i++){
        if(s[i] == '='){
            sign = -1;
            opt = 1;
            if(num!=0){
                c+=sign*opt*num;
                num = 0;
            }
        }
        else if(s[i] == 'x'){
            if(num == 0) num = 1;
            if(s[i+1] == '^' && s[i+2] == '2'){
                a+=sign*num*opt;
                i+=2;
                num = 0;
            }
            else{
                b+=sign*num*opt;
                num = 0;
            }
        }
        else if(s[i] == '+'){
            if(num!=0)
                c+=sign*opt*num;
            opt = 1;
            num = 0;
        }
        else if(s[i] == '-'){
            if(num!=0)
                c+=sign*opt*num;
            opt = -1;
            num = 0;
        }
        else if(s[i]>='0' && s[i]<='9'){
            num = num*10 + s[i]-'0';               
        }
        if(i==s.length()-1){
           c+=sign*opt*num;
        }
    }
    double d = b*b-4*a*c;
    if(d < 0){
        printf("No Solution");
    }
    else if(d == 0){
        printf("%.2f",-b/(2*a));
    }
    else{
        double d1=(-b-sqrt(d))/(2*a);
        double d2=(-b+sqrt(d))/(2*a);
        if(d1<d2){
            printf("%.2f %.2f",d1,d2);
        }
        else{
            printf("%.2f %.2f",d2,d1);
        }
    }
    return 0;
}