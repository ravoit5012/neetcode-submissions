class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int cnt = 0;
        for(auto& num : nums){
            product*=(num==0?1:num);
            if(num==0)cnt++;
        }
        vector<int> r(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(cnt>1) r[i] = 0;
            else if(cnt==1 && nums[i]!=0) r[i] = 0;
            else if(cnt==1 && nums[i]==0) r[i] = product;
            else r[i] = product/nums[i];
        }
        return r;
    }
};
