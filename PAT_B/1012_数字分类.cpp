#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[5];         
    /*a[1]:能被 5 整除的数字中所有偶数的和
      a[2]:将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n​1−n​2+n​3−n​4​​⋯
      a[3]:被 5 除后余 2 的数字的个数
      a[4]:被 5 除后余 3 的数字的平均数，精确到小数点后 1 位
      a[5]:被 5 除后余 4 的数字中最大数字*/
    int j=1;    //用于a[1]交错求和
    int sum=0;  //保存a[3]中数字的个数
    int flag[5];
    fill(a,a+5,0);
    fill(flag,flag+5,0);
    int num;    
    for(int i=0;i<n;i++){
        cin>>num;
        switch(num%5){
            case 0:
                if(num%2==0){
                    a[0]=a[0]+num;
                    flag[0]=1;
                }
                break;
            case 1:
                a[1]=a[1]+j*num;
                j=-j;
                flag[1]=1;
                break;
            case 2:
                a[2]++;
                flag[2]=1;
                break;
            case 3:
                a[3]=a[3]+num;
                sum++;
                flag[3]=1;
                break;
            case 4:
                if(num>a[4]){
                    a[4]=num;
                }
                flag[4]=1;
                break;
        }
    }
    for(int k=0;k<5;k++){
        if(flag[k]==1&&k!=3){
            cout<<a[k];
        }
        else if(flag[k]==1&&k==3){
            cout<<fixed<<setprecision(1)<<a[k]/(double)sum;
        }
        else{
            cout<<"N";
        }
        if(k!=4){
            cout<<" ";
        }
    }
    return 0;
}