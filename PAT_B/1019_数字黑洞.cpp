#include<bits/stdc++.h>

using namespace std;

void to_array(int n,int a[]){
  for(int i=0;i<4;i++){
    a[i]=n%10;
    n/=10;
  }
}

int main(){
    int n;   //n可能输入少于4位
    int a[4];
    cin>>n;
    to_array(n,a);
    int max,min;
    int num;
    while(true){
        sort(a,a+4);
        max=a[3]*1000+a[2]*100+a[1]*10+a[0];
        min=a[0]*1000+a[1]*100+a[2]*10+a[3];
        num=max-min;
        printf("%04d - %04d = %04d\n",max,min,num);
        if(num==0||num==6174){
            break;
        }
        to_array(num,a);
    }
    return 0;
}