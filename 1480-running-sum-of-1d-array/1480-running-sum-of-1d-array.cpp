class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        vector <int> final;
        final.push_back(nums[0]);
        for (i = 1; i<nums.size(); i++){
            final.push_back(nums[i] + final[i-1]);
        }
        return final;
    }
};