#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int max,min;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]>a[n-1]){
		max=a[0];
		min=a[n-1];
	}
	else{
		max=a[n-1];
		min=a[0];
	}
	if((a[(n+1)/2-1]+a[n/2])/2==(a[(n+1)/2-1]+a[n/2])/2.0){
		int mid=(a[(n+1)/2-1]+a[n/2])/2;
		cout<<max<<" "<<mid<<" "<<min;
	}
	else{
		double mid=(a[(n+1)/2-1]+a[n/2])/2.0;
		cout<<max<<" "<<mid<<" "<<min;
	}
	return 0;
} 
