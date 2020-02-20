#include<bits/stdc++.h>

using namespace std;

typedef struct person{
    int s=0,f=0,p=0;  //胜负平的次数
    int c=0,j=0,b=0;  //出锤子剪刀布赢的次数
}person;

int main(){
    int n;
    char a,b;
    cin>>n;
    person A,B;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==b){
            A.p++;
            B.p++;
        }
        else if(a=='C'&&b=='J'){
            A.s++;
            B.f++;
            A.c++;
        }
        else if(a=='J'&&b=='B'){
            A.s++;
            B.f++;
            A.j++;
        }
        else if(a=='B'&&b=='C'){
            A.s++;
            B.f++;
            A.b++;
        }
        else if(b=='C'&&a=='J'){
            A.f++;
            B.s++;
            B.c++;
        }
        else if(b=='J'&&a=='B'){
            A.f++;
            B.s++;
            B.j++;
        }
        else if(b=='B'&&a=='C'){
            A.f++;
            B.s++;
            B.b++;
        }
    }
    cout<<A.s<<" "<<A.p<<" "<<A.f<<endl;
    cout<<B.s<<" "<<B.p<<" "<<B.f<<endl;
    if(A.b>=A.c&&A.b>=A.j){
        cout<<"B";
    }
    else if(A.c>A.b&&A.c>=A.j){
        cout<<"C";
    }
    else{
        cout<<"J";
    }
    cout<<" ";
    if(B.b>=B.c&&B.b>=B.j){
        cout<<"B";
    }
    else if(B.c>B.b&&B.c>=B.j){
        cout<<"C";
    }
    else{
        cout<<"J";
    }
    return 0;
}