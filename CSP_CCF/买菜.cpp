#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n;
	scanf("%d",&n);
	long long a[2005][2]={0},b[2005][2]={0};
	long long t=0; 
	for(int i=0;i<n;i++){
		scanf("%ld%ld",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<n;i++){
		scanf("%ld%ld",&b[i][0],&b[i][1]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][0]<=b[j][1]&&b[j][0]<=a[i][1]){
				t=t+min(a[i][1],b[j][1])-max(a[i][0],b[j][0]);
			}
		}
	}
	printf("%d",t);
	return 0;
}
