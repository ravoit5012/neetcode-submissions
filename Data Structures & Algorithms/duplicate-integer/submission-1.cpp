class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> fre;
        for(auto num : nums){
            fre[num]++;
        }

        for(auto &f : fre){
            if(f.second>=2) return true;
        }
        return false;
    }
};