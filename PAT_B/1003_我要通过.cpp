#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();
	int a,b,c;//记录P前 PT中 T后A的个数
	map<char,int>pat;
	char s;
	for(int i=0;i<n;i++){
		a=0;b=0;c=0;
		bool flag=true;
		pat['P']=0;
		pat['T']=0;
		while((s = getchar()) != '\n'){
			if(s=='A'&&pat['P']==0){
				a++;
			}
			else if(s=='A'&&pat['T']==0){
				b++;
			}
			else if(s=='A'){
				c++;
			}
			else if(s=='P'&&pat['P']==0){
				pat['P']=1;
			}
			else if(s=='T'&&pat['P']!=0&&pat['T']==0){
				pat['T']=1;
			}
			else{
				flag=false;
			}
		}
		if(flag&&(a*b)==c&&b!=0&&pat['P']==1&&pat['T']==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	} 
	return 0;
} 

//大佬解答
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n, p = 0, t = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        map<char, int> m;
        for(int j = 0; j < s.size(); j++) {
            m[s[j]]++;
            if (s[j] == 'P') p = j;
            if (s[j] == 'T') t = j;
        }
        if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && t-p != 1 && p * (t-p-1) == s.length()-t-1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
