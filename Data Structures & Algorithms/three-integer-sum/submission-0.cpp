class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> r;
        for(int i = 0 ; i < n ; i++){
            unordered_set<int> s;
            for(int j = i+1; j < n; j++){
                int req = -1*(nums[i]+nums[j]);
                if(s.find(req)!=s.end()){
                    vector<int> x = {nums[i], nums[j], req};
                    sort(x.begin(), x.end());
                    r.insert(x);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> result;
        for(auto &y : r){
            result.push_back(y);
        }
        return result;
    }
};
