#include<bits/stdc++.h>
using namespace std;
#define MAX 10002

int father[MAX]; //存放父节点 
bool isRoot[MAX];

//查找x所在集合的根节点 
int findFather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	//路径压缩
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	}
	return x;	
} 

//合并集合
void Union(int a,int b){
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;
	} 
}	

int main(){
	int N;
	cin>>N;
	char ch;
	int n1,n2;
	cin>>ch;
	for(int i=1;i<=N;i++){//设置每个元素父节点为自己 
		father[i]=i;
		isRoot[i]=false;
	}
	while(ch!='S'){
		cin>>n1>>n2;
		if(ch=='C'){
			if(findFather(n1)==findFather(n2)){
				cout<<"yes"<<endl;
			}
			else{
				cout<<"no"<<endl;
			}
		}
		if(ch=='I'){
			Union(n1,n2);
		}
		cin>>ch;
	}
	for(int i=1;i<=N;i++){
		isRoot[findFather(i)]=true;
	}
	int ans=0;//记录集合的数目
	for(int i=1;i<=N;i++){
		ans+=isRoot[i];
	} 
	if(ans==1){
		cout<<"The network is connected.";
	}
	else{
		cout<<"There are "<<ans<<" components.";
	}
	return 0;
} 
