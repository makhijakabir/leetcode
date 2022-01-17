class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        
        unordered_set<int>set1;
        
        for (auto n : nums1)
            set1.insert(n);
        
        for (auto n : nums2){
            if(set1.count(n)){
                ans.push_back(n);
                set1.erase(n);
            }
        }
        return ans;
    }
};


