class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> mp;
        for(auto& s : strs){
            string x = s;
            sort(x.begin(), x.end());
            mp[x].push_back(s);
        }
        for(auto& m : mp){
            result.push_back(m.second);
        }
        return result;
    }
};
