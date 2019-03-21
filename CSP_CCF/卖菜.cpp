#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

int main(){
	int n,a[MAX]={0},b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int isfirst=1;
	int j=0;
	while(a[j]){
		if(isfirst){
			b=(a[j]+a[j+1])/2;
			isfirst=0;
		}
		else if(!a[j+1]){
			b=(a[j-1]+a[j])/2;
		}
		else{
			b=(a[j-1]+a[j]+a[j+1])/3;
		}
		printf("%d ",b);
		j++;
	}
	return 0; 
} 
