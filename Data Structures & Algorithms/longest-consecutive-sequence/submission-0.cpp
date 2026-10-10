class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for (auto& num : nums) {
            s.insert(num);
        }
        int ans = 0;
        for (auto& num : nums) {
            if (s.contains(num - 1))
                continue;
            else {
                int cnt = 0;
                int j = num;
                while (s.contains(j)) {
                    cnt++;
                    j++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};
