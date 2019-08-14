#include<bits/stdc++.h>
#define MAX 11
using namespace std;

int G[MAX][MAX]={0}; 
bool vis[MAX]={false};//记录边是否被访问过 
bool inq[MAX]={false};
queue<int> q;
	
//深度优先访问DFS
void DFS(int u,int N){
	vis[u]=true;
	cout<<u<<" ";
	for(int i=0;i<N;i++){
		if(G[u][i]==1&&vis[i]==false){
			DFS(i,N);
		}
	}
} 

//广度优先搜索BFS
void BFS(int u,int N){
	q.push(u);
	inq[u]=true;
	while(!q.empty()){
		u=q.front();
		cout<<u<<" ";	
		q.pop();
		for(int i=0;i<N;i++){
			if(G[u][i]==1&&inq[i]==false){
				q.push(i);
				inq[i]=true;
			}

		}
	}
} 

int main(){
	int N,E;//图的顶点数，边数 
	cin>>N>>E;
	int n1,n2;
	for(int i=0;i<E;i++){
		cin>>n1>>n2;
		G[n1][n2]=1;
		G[n2][n1]=1;
	}
	for(int i=0;i<N;i++){
		if(vis[i]==false){
			cout<<"{ ";
			DFS(i,N);
			cout<<"}"<<endl;
		}
	}
	for(int i=0;i<N;i++){
		if(inq[i]==false){
			cout<<"{ ";	
			BFS(i,N);
			cout<<"}"<<endl;
		}		
	}
	return 0;
}
