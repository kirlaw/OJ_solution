///*
#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

bool vis[MAX]={false};
vector<int>Adj[MAX];
double n;//与该结点距离不超过6的结点数

//广度优先搜索
void BFS(int i,int depth){
	int last=i,temp;
	vis[i]=true;
	queue<int>q;
	q.push(i);
	while(!q.empty()){
		i=q.front();
		q.pop();
		for(int j=0;j<Adj[i].size();j++){
			if(vis[Adj[i][j]]==false&&depth<6){
				n++;
				temp=Adj[i][j];
				q.push(Adj[i][j]);
				vis[Adj[i][j]]=true;
			}
		
		}
		if(i==last){
			depth++;
			last=temp;//每层的最后一个结点
		}
	} 	
} 

int main() {
	double N,M;
	cin>>N>>M;
	int n1,n2;
	for(int i=0;i<M;i++){
		cin>>n1>>n2;
		Adj[n1].push_back(n2);//Adj[n1][j]=n2; j=0;j++;
		Adj[n2].push_back(n1);
	} 
	for(int i=1;i<N+1;i++){
		int depth=0;
		n=1;
		BFS(i,depth);
		cout<<i<<": "<<fixed<<setprecision(2)<<n/N*100.00<<"%"<<endl; 
		memset(vis,false,sizeof(vis));
	} 
	return 0;
}

//*/
/* 
#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

bool vis[MAX]={false};
vector<int>Adj[MAX];
double n;//与该结点距离不超过6的结点数

//深度优先搜索
void DFS(int i,int depth){
	vis[i]=true;
	for(int j=0;j<Adj[i].size();j++){
		//cout<<Adj[i][j]<<" "<<depth<<endl;
		if(vis[Adj[i][j]]==false&&depth<6){
			depth++;
			n++;
			DFS(Adj[i][j],depth);
			depth--;
		}
		else if(vis[Adj[i][j]]==true&&depth<6){
			depth++;
			DFS(Adj[i][j],depth);
			depth--;
		}
	}
} 

int main() {
	double N,M;
	cin>>N>>M;
	int n1,n2;
	for(int i=0;i<M;i++){
		cin>>n1>>n2;
		Adj[n1].push_back(n2);//Adj[n1][j]=n2; j=0;j++;
		Adj[n2].push_back(n1);
	} 
	for(int i=1;i<N+1;i++){
		int depth=0;
		n=1;
		DFS(i,depth);
		//cout<<n<<endl;
		cout<<i<<": "<<fixed<<setprecision(2)<<n/N*100.00<<"%"<<endl; 
		memset(vis,false,sizeof(vis));
	} 
	return 0;
}
