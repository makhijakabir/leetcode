class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_set<int>ans;
        
        for (int i = 0; i < nums.size(); i++){
            if (ans.find(nums[i]) == ans.end())
                ans.insert(nums[i]);
            else
                return nums[i];
        }
        return -1;
    }
};