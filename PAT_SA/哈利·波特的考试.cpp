#include<bits/stdc++.h>
#define MAX 101
#define INF 1000000

using namespace std;

int N,M; 
int G[MAX][MAX];
bool vis[MAX];
int d[MAX];//��㵽������������·������ 

//���ض����㵽�������ж�����̾���
int Dijkstra(int s){
	fill(vis,vis+MAX,false);
	fill(d,d+MAX,INF);
	int dmax=0;//�����ħ�� 
	d[s]=0;//������ľ���Ϊ0  
	for(int i=0;i<N;i++){
		int u=-1,MIN=INF;//MIN�����С��d[u] 
		for(int j=1;j<N+1;j++){//�ҵ�δ���ʵĶ�����d[]��С��,����Ϊu 
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		} 
		//�Ҳ���С��MAX��d[u]��˵��ʣ�µĶ�������s����ͨ
		if(u==-1) return 0;
		vis[u]=true;
		for(int v=1;v<N+1;v++){
			//���vδ����&&u�ܵ���v&&��uΪ�н��d[v]����
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
	int len;//��Ȩ 
	int mdis=INF;//�������� 
	int n;//ӵ����������Ľ���� 
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
