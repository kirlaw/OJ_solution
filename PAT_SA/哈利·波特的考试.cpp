#include<bits/stdc++.h>
#define MAX 101
#define INF 1000000

using namespace std;

int N,M; 
int G[MAX][MAX];
bool vis[MAX];
int d[MAX];//起点到其他各点的最短路径长度 

//从特定顶点到其他所有顶点最短距离
int Dijkstra(int s){
	fill(vis,vis+MAX,false);
	fill(d,d+MAX,INF);
	int dmax=0;//各点最长魔咒 
	d[s]=0;//到自身的距离为0  
	for(int i=0;i<N;i++){
		int u=-1,MIN=INF;//MIN存放最小的d[u] 
		for(int j=1;j<N+1;j++){//找到未访问的顶点中d[]最小的,保存为u 
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		} 
		//找不到小于MAX的d[u]，说明剩下的顶点和起点s不连通
		if(u==-1) return 0;
		vis[u]=true;
		for(int v=1;v<N+1;v++){
			//如果v未访问&&u能到达v&&以u为中介点d[v]更优
			if(vis[v]==false&&G[u][v]!=INF&&(d[u]+G[u][v])<d[v]){
				d[v]=d[u]+G[u][v];		
			}
		} 
	}
	for(int i=1;i<N+1;i++){
		if(d[i]>dmax){
			dmax=d[i];
		}
	}
	return dmax; 
} 

int main(){
	fill(G[0],G[0]+MAX*MAX,INF);
	int n1,n2;
	int len;//边权 
	int mdis=INF;//最短最长距离 
	int n;//拥有最短最长距离的结点编号 
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>n1>>n2;
		cin>>len;
		G[n1][n2]=len;
		G[n2][n1]=len;
	}
	for(int i=1;i<N+1;i++){
		if(Dijkstra(i)<mdis){
			mdis=Dijkstra(i);
			n=i;
		}	
	}
	if(mdis==0){
		cout<<"0";
	}
	else{
		cout<<n<<" "<<mdis;
	}
	return 0;
}
