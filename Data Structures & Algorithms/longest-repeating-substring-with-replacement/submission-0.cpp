class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int l=0,r=0,maxLen=0,maxFreq=0;
        for (r=0;r<s.length(); ++r){
            count[s[r] - 'A']++;
            maxFreq = max(maxFreq, count[s[r] - 'A']);
            if ((r-l+1) - maxFreq > k){
                count[s[l] - 'A'] --;
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};
