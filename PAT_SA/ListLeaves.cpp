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
	int isfirst=1;//�ж��Ƿ�Ϊ��һ����� 
	for(int i=0;i<n;i++){
		cin>>l>>r;
		if(l=='-'){
			bt[i].lchild=-1;
		}
		else{
			bt[i].lchild=l-'0';
			bt[l-'0'].root=false;//Ϊ�����򲻿���Ϊ���ڵ� 
		}
		if(r=='-'){
			bt[i].rchild=-1;
		}
		else{
			bt[i].rchild=r-'0';
			bt[r-'0'].root=false;
		}
	}
	//�ҵ����ڵ� 
	for(int i=0;i<n;i++){
		if(bt[i].root==true){
			root1=i;
		}
	}
	
	//��������������ֵ
	int j=0;
	tree[j++]=root1;
	for(int i=0;i<n;i++){	
		if(bt[tree[i]].lchild!=-1){//������ 
			tree[j++]=bt[tree[i]].lchild;
		}
		if(bt[tree[i]].rchild!=-1){//���Һ��� 
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
