#include<bits/stdc++.h>

using namespace std; 

typedef struct AVLNode *AVLTree;
struct AVLNode {
	int Data;
	int Height;
	AVLTree Left;
	AVLTree Right;
}AVLNode;
 
//得到树高
int GetHeight(AVLTree T) {
	if (!T)
		return -1;
	else
		return T->Height;
}
 
int Max(int a, int b) {
	return (a > b) ? a : b;
}

//左旋 
AVLTree SingleLeft(AVLTree K) {
	AVLTree Tmp;
	Tmp = K;
	K = K->Left;
	Tmp->Left = K->Right;
	K->Right = Tmp;
	Tmp->Height = Max(GetHeight(Tmp->Left), GetHeight(Tmp->Right)) + 1;
    K->Height = Max(GetHeight(K->Left), GetHeight(K->Right)) + 1;
	return K;
}

//右旋 
AVLTree SingleRight(AVLTree K) {
	AVLTree Tmp;
	Tmp = K;
	K = K->Right;
	Tmp->Right = K->Left;
	K->Left = Tmp;
	Tmp->Height = Max(GetHeight(Tmp->Left), GetHeight(Tmp->Right)) + 1;
	K->Height = Max(GetHeight(K->Left), GetHeight(K->Right)) + 1;
	return K;
}
 
AVLTree DoubleLeft(AVLTree K) {
	K->Left = SingleRight(K->Left); 
	return SingleLeft(K);
}
 
AVLTree DoubleRight(AVLTree K) {
	K->Right = SingleLeft(K->Right);
	return SingleRight(K);
}

//因插入使二叉排序树失去平衡，则作平衡旋转处理 
AVLTree Insert(int X, AVLTree T) {
	if (!T) {//是空树
		T = (AVLTree)malloc(sizeof(struct AVLNode));
		T->Data = X;
		T->Height = 0;
		T->Left = T->Right = NULL;
	}
	else if (X < T->Data) {//在左子树中搜索 
		T->Left = Insert(X, T->Left);
		if (GetHeight(T->Left) - GetHeight(T->Right) == 2) {//左高于右2，不平衡
			if (X < T->Left->Data)
				T = SingleLeft(T);
			else
				T = DoubleLeft(T);
		}
	}
	else if (X > T->Data) {
		T->Right = Insert(X, T->Right);
		if (GetHeight(T->Right) - GetHeight(T->Left) == 2) {//右高于左2
			if (X > T->Right->Data)
				T = SingleRight(T);
			else
				T = DoubleRight(T);
		}
	}
	T->Height = Max(GetHeight(T->Left), GetHeight(T->Right)) + 1;
	return T;
}
 
int main(void) {
	AVLTree T = NULL;
	int n;
	cin>>n; 
	int avl[n];
	for(int i=0;i<n;i++){
        cin>>avl[i];
		T=Insert(avl[i], T);
	} 
	if (T)
		cout<<T->Data;
	return 0;
}
