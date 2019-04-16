#include<bits/stdc++.h>

using namespace std;

typedef struct node{
    int value;
    node* rchild=NULL;
    node* lchild=NULL;
    bool isVisit=false;

}node;

node* CreatBTree(int value,node* head){
    if(head==NULL){
        node* temp=new node();
        temp->value=value;
        return temp;
    }
    if(value>head->value){
        head->rchild=CreatBTree(value,head->rchild);
    }
    else{
        head->lchild=CreatBTree(value,head->lchild);
    }
    return head;
}


void resetFlag(node* head){
    if(head->lchild!=NULL){
        resetFlag(head->lchild);
    }
    if(head->rchild!=NULL){
        resetFlag(head->rchild);
    }
    head->isVisit=false;
}

bool Compare(int value,node* head){
    if(head->isVisit==false){
        if(head->value==value){
            head->isVisit=true;
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(value>head->value){
            Compare(value,head->rchild);
        }
        else{
            Compare(value,head->lchild);
        }
    }
}

int main(){
	int N,L;
    while(1){
        cin>>N;
        if(N==0){
            break;
        }
        cin>>L;
        node* tree=NULL;
        for(int i=0;i<N;i++){
            int value;
            cin>>value;
            tree=CreatBTree(value,tree);
        }
        for(int i=0;i<L;i++){
        	bool issame=true;
            resetFlag(tree);
            for(int j=0;j<N;j++){
                int value;
                cin>>value;
                if(!Compare(value,tree)){
                    issame=false;
                }
            }
            if(!issame){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}

