class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> v;
        map<int, int> freq;
        for(auto& num : nums){
            freq[num]++;
        }
        for(auto& f : freq){
            v.push_back({f.first, f.second});
        }
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second>b.second;
        });
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};
