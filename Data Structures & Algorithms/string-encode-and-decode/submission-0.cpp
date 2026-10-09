class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        vector<int> r;
        for(auto& str : strs){
            s+=to_string(str.length());
            s+="#";
            s+=str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> r;

        for(int i = 0; i < s.length();){
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int l = stoi(s.substr(i, j - i));
            j++;
            r.push_back(s.substr(j, l));
            i = j + l;
        }
        return r;
    }
};
