#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,l,t;
	scanf("%d%d%d",&n,&l,&t);
	pair<int,int>a[n+1];//first记录位置，second记录方向 
	int line[1005]={0};//记录线段上小球信息，为-1表示没有小球，否则表示小球编号	
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].first); 
		a[i].second=1;
        line[a[i].first]=i;	
	}
	while(t--){
		for(int i=1;i<=n;i++){
			line[a[i].first]=0;
			a[i].first=a[i].first+a[i].second;
			if(line[a[i].first]!=0){
				a[i].second = -a[i].second;
				a[line[a[i].first]].second =-a[line[a[i].first]].second;
			}
			else if(a[i].first==0||a[i].first==l){
				a[i].second = -a[i].second;
			} 	
			line[a[i].first]=i;
		}
	}
	
	for(int i=1;i<=n;i++){
		printf("%d ",a[i].first);
	}
	return 0;
} 
