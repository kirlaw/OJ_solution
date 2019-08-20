#include<bits/stdc++.h>
#define MAX 101

using namespace std;

typedef struct Crocodile{
	double x,y;
	int vis;
}Crocodile;

Crocodile pos[MAX];
double dis;
bool flag=false;//判断是否能跳
	
//深度优先搜索 
void DFS(Crocodile seven,int N,int D){
	seven.vis=1;
	for(int i=0;i<N+1;i++){
		dis=sqrt((pos[i].x-seven.x)*(pos[i].x-seven.x)+(pos[i].y-seven.y)*(pos[i].y-seven.y));
		if(D>=dis&&pos[i].vis==0){
			pos[i].vis=1;
			//cout<<pos[i].x<<" "<<pos[i].y<<endl;
			if((50-pos[i].x)<=D||(50-pos[i].x)>=(100-D)||(50-pos[i].y)<=D||(50-pos[i].y)>=(100-D)){	
				flag=true;
				break;
			}
			DFS(pos[i],N,D);
		}
	}
	
}

int main(){
	int N;
	double D;
	cin>>N>>D;
	for(int i=1;i<N+1;i++){
		cin>>pos[i].x>>pos[i].y;
		pos[i].vis=0;//初始设置为未被访问 
	}
	pos[0].x=0;//初始位置 
	pos[0].y=0; 
	pos[0].vis=0;
	for(int i=0;i<N+1;i++){
		dis=sqrt((pos[i].x-pos[0].x)*(pos[i].x-pos[0].x)+(pos[i].y-pos[0].y)*(pos[i].y-pos[0].y));
		if((D+7.5)>=dis&&pos[i].vis==0){
			if((50-pos[i].x)<=D+7.5||(50-pos[i].x)>=(100-D-7.5)||(50-pos[i].y)<=D+7.5||(50-pos[i].y)>=(100-D-7.5)){	
				flag=true;
				break;
			}
			DFS(pos[i],N,D);
		}
	} 	 
	if(flag){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
} 
