class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;
        //find找到返回第一次出现的第一个字符位置，找不到返回-1
        int pos = haystack.find(needle);
        return pos;
    }
};
