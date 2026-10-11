class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> fre(128,0);
        for(auto &c : t) fre[c]++;

        int start = 0, minLen = INT_MAX, minStart = 0, req = t.size();
        for(int i = 0; i < s.length(); i++){
            if(fre[s[i]]>0) req--;
            fre[s[i]]--;

            while(req==0){
                if(i-start+1<minLen){
                    minLen = i-start+1;
                    minStart = start;
                }
                fre[s[start]]++;
                if(fre[s[start]]>0) req++;
                start++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
