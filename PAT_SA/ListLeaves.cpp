#include<bits/stdc++.h>

using namespace std;

typedef struct node{
	//int data;
	int lchild;
	int rchild;
	bool root=true;
}node;

int main(){
	int n;
	cin>>n;
	node bt[n];
	char l,r;
	int root1;
	int tree[n];
	int isfirst=1;//判断是否为第一个输出 
	for(int i=0;i<n;i++){
		cin>>l>>r;
		if(l=='-'){
			bt[i].lchild=-1;
		}
		else{
			bt[i].lchild=l-'0';
			bt[l-'0'].root=false;//为孩子则不可能为根节点 
		}
		if(r=='-'){
			bt[i].rchild=-1;
		}
		else{
			bt[i].rchild=r-'0';
			bt[r-'0'].root=false;
		}
	}
	//找到根节点 
	for(int i=0;i<n;i++){
		if(bt[i].root==true){
			root1=i;
		}
	}
	
	//层序遍历保存结点的值
	int j=0;
	tree[j++]=root1;
	for(int i=0;i<n;i++){	
		if(bt[tree[i]].lchild!=-1){//有左孩子 
			tree[j++]=bt[tree[i]].lchild;
		}
		if(bt[tree[i]].rchild!=-1){//有右孩子 
			tree[j++]=bt[tree[i]].rchild;
		}
	} 
	
	for(int i=0;i<n;i++){
		if(bt[tree[i]].lchild==-1&&bt[tree[i]].rchild==-1){
			if(isfirst){
				cout<<tree[i];
				isfirst=0;
			} 
			else{
				cout<<" "<<tree[i];
			}
		}
	} 
	return 0;
} 
