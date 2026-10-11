class Solution {
public:
    int maxArea(vector<int>& h) {
        int res = 0, n = h.size();
        int left = 0;
        int right = n-1;

        while(left<right){
            int water = min(h[left], h[right])*(right-left);
            if(h[left]<h[right]){
                left++;
            } else {
                right--;
            }
            res = max(res, water);
        }
        return res;
    }
};
