#include<bits/stdc++.h>

using namespace std;

struct node{
	int num;//������
	char op;//������
	bool flag;//true��ʾ��������false��ʾ������ 
};

string str;
stack<node> s;//���������
queue<node> q;//�����׺���ʽ
map<char,int> op;//��Ӧ�������������ȼ�

//����׺���ʽת��Ϊ��׺���ʽ 
void Change(){
	int num;
	node temp;
	for(int i=0;i<str.length();){
		if(str[i]>='0'&&str[i]<='9'){//���� 
			temp.flag=true;
			temp.num=str[i++]-'0';//charתint 
			/*����λ����1 
			while(i<str.length()&&str[i]>='0'&&str[i]<='9'){
				temp.num=temp.num*10+(str[i]-'0');
				i++;
			} */
			q.push(temp);//���˲�����ѹ���׺���ʽ���� 
		} 
		else{//�ǲ����� 
			temp.flag=false;
			//ֻҪ������ջ��ջ��Ԫ�����ȼ��ȸò������ߣ��Ͱ�ջ��Ԫ�ص�������׺���ʽ����
			while(!s.empty()&&op[str[i]]<=op[s.top().op]) {
				q.push(s.top());
				s.pop();
			}
			temp.op=str[i];
			s.push(temp);//�Ѹò�����ѹ��ջ
			i++; 
		} 
	} 
	//��ջ�л��в��������ͽ�����������׺���ʽ����
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	} 
} 

//�����׺���ʽ 
int Cal(){
	int temp1,temp2;
	node cur,temp;
	while(!q.empty()){
		cur=q.front();//��¼����Ԫ��
		q.pop();
		if(cur.flag==true){//��Ϊ��������ѹ��ջ 
			s.push(cur);
		} 
		else{
			temp2=s.top().num;
			s.pop();
			temp1=s.top().num;
			s.pop();
			temp.flag=true;//��¼�����Ĳ�����
			if(cur.op=='+'){
				temp.num=temp1+temp2;
			} 
			else if(cur.op=='-'){
				temp.num=temp1-temp2;
			}
			else if(cur.op=='x'){
				temp.num=temp1*temp2;
			}
			else{
				temp.num=temp1/temp2;
			}
			s.push(temp);//�Ѹò�����ѹ��ջ 
		} 
	}
	return s.top().num; 
}
 
int main(){
	op['+']=op['-']=1;//���ò����������ȼ� 
	op['x']=op['/']=2;
	int n; 
	cin>>n;
	int a[n];//����ÿ������Ľ�� 
	for(int i=0;i<n;i++){
		cin>>str;
		while(!s.empty()){//��ʼ��ջ 
			s.pop();
		}
		Change();
		a[i]=Cal();	
	}
	for(int j=0;j<n;j++){
		if(a[j]==24){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		} 
	}
	return 0;
} 
