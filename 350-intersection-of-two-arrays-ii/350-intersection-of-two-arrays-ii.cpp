class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        multiset<int>s1;
        vector<int>ans;
        
        if(nums1.size() > nums2.size()){
            for (auto n : nums1)
                s1.insert(n);
        
            for (auto n : nums2){
                if(s1.count(n)){
                    ans.push_back(n);
                    auto it = s1.find(n);
                    if(it != s1.end())
                        s1.erase(it);
                }
            }
        }
        
        else{
            for (auto n : nums2)
                s1.insert(n);
        
            for (auto n : nums1){
                if(s1.count(n)){
                    ans.push_back(n);
                    auto it = s1.find(n);
                    if(it != s1.end())
                        s1.erase(it);
                }
            }
        }
        
        return ans;
        
    }
};