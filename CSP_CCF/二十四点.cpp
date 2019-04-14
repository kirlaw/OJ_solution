#include<bits/stdc++.h>

using namespace std;

struct node{
	int num;//操作数
	char op;//操作符
	bool flag;//true表示操作数，false表示操作符 
};

string str;
stack<node> s;//保存操作符
queue<node> q;//保存后缀表达式
map<char,int> op;//对应操作符及其优先级

//将中缀表达式转换为后缀表达式 
void Change(){
	int num;
	node temp;
	for(int i=0;i<str.length();){
		if(str[i]>='0'&&str[i]<='9'){//是数 
			temp.flag=true;
			temp.num=str[i++]-'0';//char转int 
			/*若数位超过1 
			while(i<str.length()&&str[i]>='0'&&str[i]<='9'){
				temp.num=temp.num*10+(str[i]-'0');
				i++;
			} */
			q.push(temp);//将此操作数压入后缀表达式队列 
		} 
		else{//是操作符 
			temp.flag=false;
			//只要操作符栈的栈顶元素优先级比该操作符高，就把栈顶元素弹出到后缀表达式队列
			while(!s.empty()&&op[str[i]]<=op[s.top().op]) {
				q.push(s.top());
				s.pop();
			}
			temp.op=str[i];
			s.push(temp);//把该操作符压入栈
			i++; 
		} 
	} 
	//若栈中还有操作符，就将它弹出到后缀表达式队列
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	} 
} 

//计算后缀表达式 
int Cal(){
	int temp1,temp2;
	node cur,temp;
	while(!q.empty()){
		cur=q.front();//记录队首元素
		q.pop();
		if(cur.flag==true){//若为操作数，压入栈 
			s.push(cur);
		} 
		else{
			temp2=s.top().num;
			s.pop();
			temp1=s.top().num;
			s.pop();
			temp.flag=true;//记录计算后的操作数
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
			s.push(temp);//把该操作数压入栈 
		} 
	}
	return s.top().num; 
}
 
int main(){
	op['+']=op['-']=1;//设置操作符的优先级 
	op['x']=op['/']=2;
	int n; 
	cin>>n;
	int a[n];//保存每个计算的结果 
	for(int i=0;i<n;i++){
		cin>>str;
		while(!s.empty()){//初始化栈 
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
