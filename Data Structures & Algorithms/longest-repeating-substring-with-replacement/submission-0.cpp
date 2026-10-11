class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0;
        int maxFreq = 0;
        int ans = 0;
        vector<int> freq(26, 0);
        for(int i = 0; i < s.length(); i++){
            freq[s[i]-'A']++;
            maxFreq = max(maxFreq, freq[s[i]-'A']);
            while((i-start + 1)-maxFreq>k){
                freq[s[start]-'A']--;
                start++;
            }
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};
