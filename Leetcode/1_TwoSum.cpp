class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetnum(2);
        map<int, int> temp_map;
        for (int i = 0; i < nums.size(); i++) {
            temp_map[nums[i]]= i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (temp_map.count(complement) && temp_map[complement] != i) {
                targetnum[0]=i;
                targetnum[1]=temp_map[complement];
                break;//这个很重要
            }
        }
        return targetnum;
    }
};

int main()
{
    vector<int> arr = { 2, 7, 11, 15 };
    int val = 9;
    Solution test;
    cout << "[" << test.twoSum(arr, val)[0] << "," << test.twoSum(arr, val)[1] << "]" << endl;
    return 0;
}
