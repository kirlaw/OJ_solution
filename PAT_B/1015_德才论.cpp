#include<bits/stdc++.h>

using namespace std;

typedef struct student{
    long long id;
    int dgrade,cgrade,sum;
    int clas;
}student;

int cmp(student a,student b){
    if(a.clas!=b.clas){
        return a.clas<b.clas;
    }
    else if(a.sum!=b.sum){
        return a.sum>b.sum;
    }
    else if(a.dgrade!=b.dgrade){
        return a.dgrade>b.dgrade;
    }
    else{
        return a.id<b.id;
    }
}
int main(){
    int N,L,H;
    cin>>N>>L>>H;
    student stu[N];
    int M=0; //通过的人数
    for(int i=0;i<N;i++){
        cin>>stu[i].id>>stu[i].dgrade>>stu[i].cgrade;
        stu[i].sum=stu[i].cgrade+stu[i].dgrade;
        if(stu[i].dgrade>=L&&stu[i].cgrade>=L){
            M++;
            if(stu[i].dgrade>=H&&stu[i].cgrade>=H){//才德全尽
                stu[i].clas=1;
            }
            else if(stu[i].dgrade>=H&&stu[i].cgrade<H){//德胜才
                stu[i].clas=2;
            }
            else if(stu[i].dgrade<H&&stu[i].cgrade<H&&stu[i].dgrade>=stu[i].cgrade){//才德兼亡
                stu[i].clas=3;
            }
            else{ //才胜德
                stu[i].clas=4;
            }
        }
        else{
            stu[i].clas=5;
        }
    }
    sort(stu,stu+N,cmp);
    cout<<M<<endl;
    for(int i=0;i<M;i++){
       printf("%lld %d %d\n",stu[i].id,stu[i].dgrade,stu[i].cgrade);
    }
    return 0;
}