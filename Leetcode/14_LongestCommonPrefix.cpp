class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        if(strs.empty()){
            return result;
        }
        int i=0;
        while(i<strs[0].size()){
            char temp=strs[0][i];//第一个字符串的第一个字母
            //从第二个字符串开始做对比
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]==temp){
                    continue;
                }
                else{
                    return result;
                }
            }
            result+=temp;
            i++;               
        }
        return result;        
    }
};
