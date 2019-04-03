#include <iostream>
#include <vector>
#define Max_Node 11 //NС�ڵ���10 

using namespace std;
 
typedef struct Node{
    char value;
    int left;
    int right;
}Node;

//������ 
void CreateTree(vector<Node>& Tree,int N){    
    char value,left,right;
    for (int i=0; i<N; ++i){
        cin>>value>>left>>right;
        Tree[i].value=value;
        
        if (left=='-'){
            Tree[i].left=-1;
        }
		else{
            Tree[i].left=left-'0';//char��ת���� 
        }
        if (right=='-'){
            Tree[i].right=-1;
        }
		else{
            Tree[i].right=right-'0';
        }
    }
}
 
//Ѱ����������������û���������ָ������ 
int FindTreeRoot(vector<Node>& Tree,int N){
    int Flag[Max_Node];
    for (int i=0; i<N; ++i){
        Flag[i]=0;
    }
    
    for (int i=0; i<N; ++i){
        if (Tree[i].left!=-1){
            Flag[Tree[i].left]=1; //�����ӣ����Ǹ��ڵ� 
        }
        if (Tree[i].right!=-1){
            Flag[Tree[i].right]=1;//���Һ��ӣ����Ǹ��ڵ� 
        }
    }
    
    int k;
    for (k=0; k<N; ++k){
        if (Flag[k]==0){
            break;
        }
    }
    return k;
}

//�ݹ��ж������Ƿ�ͬ�� 
bool IsOmorphic(int Root1,int Root2,vector<Node>& Tree1,vector<Node>& Tree2){
    if (Tree1[Root1].value==Tree2[Root2].value){//�������ͬ 
        //�˽��û��Ҷ�ӽ�� 
        if (Tree1[Root1].left==-1 && Tree1[Root1].right==-1 && Tree2[Root2].left==-1 && Tree2[Root2].right==-1){
            return true;
        }
        
        //������㶼����һ������Ϊ�գ���һ���������������
        if (Tree1[Tree1[Root1].left].value==Tree2[Tree2[Root2].left].value && Tree1[Root1].right==-1 && Tree2[Root2].right==-1){
            return IsOmorphic(Tree1[Root1].left, Tree2[Root2].left, Tree1, Tree2);
        }
        if (Tree1[Tree1[Root1].left].value==Tree2[Tree2[Root2].right].value && Tree1[Root1].right==-1 && Tree2[Root2].left==-1){
            return IsOmorphic(Tree1[Root1].left, Tree2[Root2].right, Tree1, Tree2);
        }
        if (Tree1[Tree1[Root1].right].value==Tree2[Tree2[Root2].left].value && Tree1[Root1].left==-1 && Tree2[Root2].right==-1){
            return IsOmorphic(Tree1[Root1].right, Tree2[Root2].left, Tree1, Tree2);
        }
        if (Tree1[Tree1[Root1].right].value==Tree2[Tree2[Root2].right].value && Tree1[Root1].left==-1 && Tree2[Root2].left==-1){
            return IsOmorphic(Tree1[Root1].right, Tree2[Root2].right, Tree1, Tree2);
        }
        
        //���������������������
        if (Tree1[Tree1[Root1].left].value==Tree2[Tree2[Root2].left].value && Tree1[Tree1[Root1].right].value==Tree2[Tree2[Root2].right].value){
            return (IsOmorphic(Tree1[Root1].left, Tree2[Root2].left, Tree1, Tree2))&&(IsOmorphic(Tree1[Root1].right, Tree2[Root2].right, Tree1, Tree2));
        }
        if (Tree1[Tree1[Root1].left].value==Tree2[Tree2[Root2].right].value && Tree1[Tree1[Root1].right].value==Tree2[Tree2[Root2].left].value){
            return (IsOmorphic(Tree1[Root1].left, Tree2[Root2].right, Tree1, Tree2))&&(IsOmorphic(Tree1[Root1].right, Tree2[Root2].left, Tree1, Tree2));
        }
    }
    //����������7����������������˵����ͬ��
    return false;
}
 
int main(int argc, const char * argv[]){
    //Input
    int N1;
    cin>>N1;
    vector<Node> Tree1(Max_Node);//���ó��ȷ���������c++11�ɲ�����MAX_Nodeֱ����N1
    CreateTree(Tree1,N1);
    int N2;
    cin>>N2;
    vector<Node> Tree2(Max_Node);
    CreateTree(Tree2,N2);
    
    if (N1!=N2){//�������ͬ
        cout<<"No";
    }
	else{
        if (N1==0){
            cout<<"Yes";
        }
		else{
            int root1=FindTreeRoot(Tree1,N1);
            int root2=FindTreeRoot(Tree2,N2);
            if (IsOmorphic(root1, root2, Tree1, Tree2)){
                cout<<"Yes";
            }
			else{
                cout<<"No";
            }
        }
    }
    return 0;
}

