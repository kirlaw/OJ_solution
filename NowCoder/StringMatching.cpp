#include<bits/stdc++.h>
#define MaxSize 1000000
using namespace std;

int main(){
    char t[MaxSize],p[MaxSize];
    while(scanf("%s %s",t,p)!=EOF){
        int len1 = strlen(t);
        int len2 = strlen(p);
        int count = 0;
        for(int i = 0; i < len1-len2+1; i++){
            int flag=1;
            for(int j = 0; j < len2; j++){
                if(t[i+j]!=p[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}