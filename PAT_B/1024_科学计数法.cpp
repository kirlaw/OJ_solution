#include<bits/stdc++.h>

using namespace std;

int main(){
    char s,a[10001];
    fill(a,a+10001,0);
    int e;
    scanf("%c%c.%[0-9]E%d",&s,&a[0],a+1,&e);
    if(s=='-'){
        cout<<"-";
    }
    if(e<0){ //小数点左移
        cout<<"0.";
        e++;
        while(e!=0){
            cout<<"0";
            e++;
        }
        printf("%s",a);
    }
    else{
        for(int i=0;i<=e||a[i]!=0;i++){
			if(i==e+1){
                printf(".");
            }
			printf("%c",a[i]==0?'0':a[i]);
		}

    }
    return 0;
}