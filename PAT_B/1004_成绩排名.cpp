#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string name,hname,lname;
	string number,hnumber,lnumber;
	int score;
	int hscore=0;
	int lscore=100; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name;
		cin>>number;
		cin>>score;
		if(score>=hscore){
			hscore=score;
			hname=name;
			hnumber=number;
		}
		if(score<=lscore){
			lscore=score;
			lname=name;
			lnumber=number;
		}
	}
	cout<<hname<<" "<<hnumber<<endl;
	cout<<lname<<" "<<lnumber;
	return 0;
} 
