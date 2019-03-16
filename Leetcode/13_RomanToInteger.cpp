class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        map<char,int> rmap;
        rmap['I']=1;
        rmap['V']=5;
        rmap['X']=10;
        rmap['L']=50;
        rmap['C']=100;
        rmap['D']=500;
        rmap['M']=1000;
        for(int i;i<s.size();i++){
            if(rmap[s[i]]<rmap[s[i+1]]){
                sum=sum-rmap[s[i]];
            }
            else{
                sum=sum+rmap[s[i]];
            }
        }
        return sum;
    }
};

int main() {
    string str;
    Solution s;
    while (cin >> str)
        cout << s.romanToInt(str) << endl;
    return 0;
}
