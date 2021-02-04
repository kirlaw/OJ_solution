#include<bits/stdc++.h>

int main(){
    int num;
    int x,y,z;
    int sum;
    while(scanf("%d\n%d %d %d",&num,&x,&y,&z)!=EOF){
        int a,b,price=0; //账单不见的两位数字 单价
        for(int i=9;i>0;i--){
            for(int j=9;j>=0;j--){
                sum = i*10000+x*1000+y*100+z*10+j;
                if(sum%num==0){
                    a = i;
                    b = j;
                    price = sum/num;
                    break;
                }//if
            }//for
            if(price){
                break;
            }
        }//for
        if(price){
            printf("%d %d %d\n",a,b,price);
        }
        else{
            printf("0\n");
        }
    }//while    
    return 0;
}