#include<bits/stdc++.h>
using namespace std;

int a[6][6];
int x,y,x2,y2;
//上下左右四个方向
int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}}; 
int mincost=INT_MAX;//最小代价  
int visit[6][6]={0};//是否访问过
 
//深度优先搜索
void dfs(int x,int y,int status,int cost){
    //到达终点
    if(x==x2&&y==y2){
        mincost=min(mincost,cost);
        return;
    }
    
    //当前代价大于了之前的代价，返回
    if(cost>mincost){        
        return;
    }
 
    visit[x][y]=1;//当前节点已经被访问
 
    //向四个方向进行搜索
    for(int i=0;i<4;i++){
    	//更新方向
        int nx=x+direction[i][0];
        int ny=y+direction[i][1];
 
        //新方向在棋盘内，并且没有被访问
        if((nx>=0&&nx<6&&ny>=0&&ny<6)&&(visit[nx][ny]==0)){
            //新的代价
            int nc=a[nx][ny]*status;
            //新的状态
            int ns=(nc%4)+1;
            //从此方向进行搜索
            dfs(nx,ny,ns,nc+cost);
            //失败，清除标记便于下次搜索
            visit[nx][ny]=0;
        }
    }
}

int main(){
    for(int i = 0;i<6;i++){
        for(int j = 0;j<6;j++){
            cin>>a[i][j];
        }        
    }
    cin>>x>>y>>x2>>y2;
    dfs(x,y,1,0);
    cout<<mincost<<endl;
    return 0;
}