#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n,m;//����С���ѵ������ĸ�����m��Ҫ��ӡ��·�� 
	cin>>n;
	cin>>m;
	int H[n+1],sub[m];
	H[0]=-10001;
	int temp,a;
	for(int i=1;i<=n;i++){
		cin>>H[i];
		a=i;
		do{
			if(H[a]<H[a/2]){
				temp=H[a];
				H[a]=H[a/2];
				H[a/2]=temp;  
			}
			else{
				break;
			}
			a=a/2;
		}while(a/2);//�������ֵ����ڵ�Ƚϣ���С�ڸ��򽻻� 
	} 
	for(int i=0;i<m;i++){
		cin>>sub[i];
	}
	for(int i=0;i<m;i++){
		for(int j=sub[i];j>0;j=j/2){
			cout<<H[j];
			if(j!=1){
				cout<<" ";
			}
		}
		if(i<m-1){
			cout<<endl;
		}
	}
	return 0;
}
