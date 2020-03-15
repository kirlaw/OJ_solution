#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[k+1]; 
	fill(a,a+k+1,0);
	int s; //喜欢果汁的种类 
	for(int i=0;i<n;i++){
		scanf("%d",&s);
		a[s]++;	 
	}
	int b=0; //需要购买的瓶数 
	for(int i=1;i<=k;i++){
		if(a[i]%2==0){
			b+=a[i]/2;
		}
		else{
			b+=a[i]/2+1;
		}
	} 
	printf("%d",b);
	return 0;
} 
