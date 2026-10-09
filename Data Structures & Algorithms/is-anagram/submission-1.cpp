class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> f;
        for(auto a : s){
            f[a]++;
        }
        for(auto a : t){
            f[a]--;
        }
        for(auto &x : f){
            if(x.second!=0) return false;
        }
        return true;
    }
};
