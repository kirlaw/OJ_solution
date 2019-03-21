#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int score=0;
	int c=0;//计跳到中心的次数 
	do{
		scanf("%d",&n);
		if(n==1){
			score+=1;
			c=0; 
		} 
		else if(n==2){
			c++;
			score+=(2*c);	
		}
		
	}while(n!=0);
	printf("%d",score);
	return 0; 
}
