#include<bits/stdc++.h>
using namespace std;

int camp(int n,int k){	
	for(int i=0;i<n/2;i++){
		int j=n-i;
		if(j-n==2){
			return camp(i,k)+camp(j,k);
		}
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",camp(n,k));
	return 0;
}
