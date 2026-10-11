class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int res = 0;
        int start = 0;
        set<char> s;
        for(int i = 0; i < str.length(); i++){
            while(s.find(str[i])!=s.end()){
                s.erase(str[start]);
                start++;
            }

            s.insert(str[i]);
            res = max(res, (int)s.size());
        }
        return res;
    }
};
