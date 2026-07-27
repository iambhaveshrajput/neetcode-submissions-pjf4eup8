class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hashm(256, -1);
        int l =0, r =0, maxLen = 0, len =0;
        int n = s.length();
        while (r < n){
            if (hashm[s[r]] != -1){
                if (hashm[s[r]] >= l){
                    l = hashm[s[r]] + 1;
                }
            }
            len = r - l + 1;
            maxLen = max(len, maxLen);
            hashm[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};
