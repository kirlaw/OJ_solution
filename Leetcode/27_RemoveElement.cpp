class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution s;
    int len = s.removeElement(nums, val);
    for (int i = 0; i < len; i++) {
        print(nums[i]);
    }
    return 0;
}
