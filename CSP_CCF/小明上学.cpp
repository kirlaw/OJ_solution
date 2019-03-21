#include<iostream>
#define MAX 100

using namespace std;

int main(){
	int r,y,g;
	cin>>r;
	cin>>y;
	cin>>g;
	int n;
	cin>>n;
	int a[MAX][2];
	int tim=0;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	for(int j=0;j<n;j++){
		if(a[j][0]==0){
			tim=tim+a[j][1];	
		}
		if(a[j][0]==1){
			tim=tim+a[j][1];
		}
		if(a[j][0]==2){
			tim=tim+a[j][1]+r;
		}
	}
	cout<<tim;
	return 0;
} 
