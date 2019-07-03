#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0){ //奇数一定不是有效的括号
            return false;
        }
        map<char,char> brackets;//建立map
        brackets[')']='(';
        brackets[']']='[';
        brackets['}']='{';
        stack<char> mystack;//建立栈
        for(int i=0;i<s.length();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){//匹配到左括号
                mystack.push(s[i]);//放入栈中
            }
            else if(s[i]==']'||s[i]=='}'||s[i]==')'){//匹配到右括号
                if(mystack.empty()) return false;
                //匹配到右括号，栈中应该存在左括号。否则就是无效的括号
                if(brackets[s[i]]==mystack.top())//与栈顶元素进行匹配
                {
                    mystack.pop();//匹配成功删除栈顶元素
                    continue;
                }
                else return false;
            }
        }
        if(mystack.empty()){
            return true;//最后栈中应为空
        }
        else {
            return false;
        }
    }
};

int main(){
    string str;
    cin>>str;
    Solution s;
    //将bool输出成true或
    cout << boolalpha<<s.isValid(str)<<endl;
    return 0; 
}
