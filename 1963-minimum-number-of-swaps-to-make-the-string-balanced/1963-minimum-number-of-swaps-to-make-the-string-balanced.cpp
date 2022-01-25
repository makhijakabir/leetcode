class Solution {
public:
    int minSwaps(string s) {
        int count = 0, maxCount = 0;
        
        for (auto ch:s){
            if(ch == '[')
                count --;
            else 
                count ++;
            maxCount = max(count, maxCount);
        }
        return((maxCount+1)/2);
    }
};